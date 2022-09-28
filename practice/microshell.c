#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#include <string.h>

typedef struct s_node {
	struct s_list	*list;
	struct s_node	*next;
}		t_node;

typedef struct s_list {
	int	fd_in;
	int fd_out;
	pid_t	pid;
	char	**cmd;
	struct s_list	*next;
}		t_list;

t_list	*make_list(void)
{
	t_list	*ret;

	ret = (t_list*)malloc(sizeof(t_list));
	ret->fd_in = 0;
	ret->fd_out = 1;
	ret->next = NULL;
	ret->pid = 0;
	ret->cmd = NULL;
	return (ret);
}

void	do_cmd(t_list *top, char **envp)
{
	int		fd[2];

	pipe(fd);
	top->pid = fork();
	if (top->pid == 0)
	{
		if (top->next != NULL)
			dup2(fd[1], 1);
		else
		{
			dup2(top->fd_out, 1);
			close (fd[1]);
		}
		dup2(top->fd_in, 0);
		if (top->fd_in != 0)
			close (top->fd_in);
		close (fd[0]);
		if (execve(top->cmd[0], top->cmd, envp) == -1)
			write (2, "Error\n", 6);
	}
	if (top->next != NULL)
		top->next->fd_in = fd[0];
	else
		close (fd[0]);
	if (top->fd_in != 0)
		close(top->fd_in);
	close (fd[1]);
}

void	exe_cmd(t_list *top, char **envp)
{
	int	status;
	int	now_pid;
	t_list	*temp;

	temp = top;
	while (temp != NULL)
	{
		do_cmd(temp, envp);
		temp = temp->next;
	}
	while (1)
	{
		now_pid = waitpid(0, &status, 0);
		if (now_pid == -1)
			break;
	}
}

t_node	*make_node(void)
{
	t_node	*ret;

	ret = (t_node*)malloc(sizeof(t_list));
	if (ret == NULL)
		exit(1);
	ret->list = make_list();
	ret->next = NULL;
	return (ret);
}

void	set_node(int argc, char *argv[], t_node *top)
{
	int	i = 1;
	int	cmd_num = 0;
	t_list	*list = top->list;

	while (i < argc)
	{
		if (strcmp("|", argv[i]) == 0 || i == argc - 1 || strcmp(";", argv[i]) == 0)
		{
			if (i == argc - 1 && strcmp("|", argv[i]) != 0 && strcmp(";", argv[i]) != 0)
				cmd_num++;
			if (cmd_num != 0)
			{
				list->cmd = (char**)malloc(sizeof(char*) * (cmd_num + 1));
				if (list->cmd == NULL)
					exit(1);
				list->cmd[cmd_num] = NULL;
			}
			if (strcmp("|", argv[i]) == 0)
			{
				list->next = make_list();
				list = list->next;
			}
			else if (strcmp(";", argv[i]) == 0)
			{
				top->next = make_node();
				top = top->next;
				list = top->list;
			}
			cmd_num = 0;
		}
		else
			cmd_num++;
		i++;
	}
}

void	parsing(int argc, char *argv[], t_node *top)
{
	int	i = 1;
	int	j = 0;
	t_list	*list = top->list;

	while (i < argc)
	{
		if (strcmp(";", argv[i]) == 0)
		{
			top = top->next;
			list = top->list;
			j = 0;
		}
		else if (strcmp("|", argv[i]) == 0)
		{
			list = list->next;
			j = 0;
		}
		else
		{
			list->cmd[j] = argv[i];
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[], char **envp)
{
	t_node	*top;
	t_node	*temp;

	if (argc == 1)
		return (0);
	top = make_node();
	set_node(argc, argv, top);
	parsing(argc, argv, top);
	temp = top;
	while (temp != NULL)
	{
		if (temp->list->cmd != NULL)
			exe_cmd(temp->list, envp);
		temp = temp->next;
	}
}
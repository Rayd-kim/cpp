#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#include <string.h>

typedef struct s_list {
	int	fd_in;
	int fd_out;
	pid_t	pid;
	char	**cmd;
	struct s_list	*next;
}		t_list;

t_list	*set_list(void)
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

t_list	*make_list(int argc, char *argv[])
{
	int	i = 1;
	int	cmd_num = 0;
	t_list	*ret;
	t_list	*temp;

	ret = set_list();
	temp = ret;
	while (i < argc)
	{
		if (strcmp(argv[i], "|") == 0 || i == argc - 1)
		{
			if (i == argc - 1)
				cmd_num++;
			temp->cmd = (char**)malloc(sizeof(char *) * (cmd_num + 1));
			temp->cmd[cmd_num] = NULL;
			cmd_num = 0;
			if (strcmp(argv[i], "|") == 0)
			{
				temp->next = set_list();
				temp = temp->next;
			}
			i++;
		}
		else
		{
			cmd_num++;
			i++;
		}
	}
	return (ret);
}

void	parsing(int argc, char *argv[], t_list *top)
{
	int	i = 1;
	int	j = 0;

	while (i < argc)
	{
		if (strcmp(argv[i], "|") == 0)
		{
			top = top->next;
			j = 0;
			i++;
		}
		else
		{
			top->cmd[j] = argv[i];
			// printf("%d cmd %s\n", j, top->cmd[j]);
			j++;
			i++;
		}
	}
}

void	do_cmd(t_list *top, char **envp)
{
	pid_t	pid;
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

void	free_list(t_list *top)
{
	t_list	*temp;
	
	while (top != NULL)
	{
		free(top->cmd);
		temp = top;
		top = top->next;
		free(temp);
	}
}

int	main(int argc, char *argv[], char **envp)
{
	t_list	*top;

	if (argc == 1)
		return (0);
	top = make_list(argc, argv);
	parsing(argc, argv, top);
	exe_cmd(top, envp);
	free_list(top);
	system("leaks a.out");
}
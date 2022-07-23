#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int k = 0; argv[i][k] != '\0'; k++)
				argv[i][k] = toupper(argv[i][k]);
		}
		for (int i = 1; i < argc; i++)
			std::cout << argv[i];
		std::cout << std::endl;
		return (0);
	}
}
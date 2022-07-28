#include "PhonBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	char	cmd[11];
	PhoneBook	phonebook;

	phonebook.set_phonebook();
	while (1)
	{
		std::cout << "Plese Input Command : ";
		std::cin >> cmd;
		if (!(strncmp(cmd, "ADD", 4)) || !(strncmp(cmd, "add", 4)))
			phonebook.add_contact();
		else if (!(strncmp(cmd, "SEARCH", 7)) || !(strncmp(cmd, "search", 7)))
			phonebook.print_contact();	
		else if (!(strncmp(cmd, "EXIT", 5)) || !(strncmp(cmd, "exit", 5)))
			return (0);
		else
			std::cout << "No Command" << std::endl;
	}
}
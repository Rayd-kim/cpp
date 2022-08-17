#include "PhonBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	std::string	cmd;
	PhoneBook	phonebook;

	while (1)
	{
		std::cout << "Please Input Command : ";
		std::cin >> cmd;
		if (!(cmd.compare("ADD")) || !(cmd.compare("add")))
			phonebook.add_contact();
		else if (!(cmd.compare("SEARCH")) || !(cmd.compare("search")))
		{
			phonebook.print_contact_short();
			phonebook.print_contact();
		}
		else if (!(cmd.compare("EXIT")) || !(cmd.compare("exit")))
			return (0);
		else
			std::cout << "No Command" << std::endl;
	}
}
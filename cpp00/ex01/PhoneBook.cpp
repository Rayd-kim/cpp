#include "PhonBook.hpp"

void	PhoneBook::add_contact(void)
{
	static int	index = 0;

	if (index < 8)
	{
		contact[index].add_field();
		index++;
	}
	else
	{
		index = 0;
		contact[index].add_field();
	}
}

void	PhoneBook::print_contact_short(void)
{
	for (int i = 0; i < 8; i++)
		contact[i].print_contact_short(i + 1);
}

void	PhoneBook::print_contact(void)
{
	int	index;

	std::cout << "Please input contact index : ";
	std::cin >> index;
	if (std::cin.fail() == 1)
	{
		std::cout << "Don't input string...!" << std::endl;
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		print_contact();
		return ;
	}
	if (index > 0 && index < 9)
		contact[index - 1].print_contact_all();
	else
		std::cout << "Wrong contact num!!" << std::endl;
}
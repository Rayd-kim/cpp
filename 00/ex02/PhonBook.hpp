#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	public:
		Contact	contact[8];
		void	add_contact(void)
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
		void	print_contact(void)
		{
			int	index;

			std::cout << "Please input contact index : ";
			std::cin >> index;
			contact[index - 1].print_contact(index);
		}

};

#endif
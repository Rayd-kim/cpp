#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	public:
		Contact	contact[8];
		void	set_phonebook(void)
		{
			for (int i = 0; i < 8; i++)
				contact[i].set_field();
		}
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
			for (int i = 0; i < 8; i++)
				contact[i].print_contact(i);
		}

};

#endif
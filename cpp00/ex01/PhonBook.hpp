#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	public:
		Contact	contact[8];

		void	add_contact(void);
		void	print_contact(void);
		void	print_contact_short(void);
};

#endif
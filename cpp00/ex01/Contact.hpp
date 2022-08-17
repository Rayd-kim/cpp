#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darkestsecret;
	public:
		void	print_contact_short(int index);
		void	print_contact_all(void);
		void	add_field(void);
		void	make_ten_char(std::string str);
};

#endif
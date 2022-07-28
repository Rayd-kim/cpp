#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
	private:
		char	firstname[11];
		char	lastname[11];
		char	nickname[11];
		char	phonenumber[20];
		char	darkestsecret[11];
	public:
		void	print_contact(int index);
		void	set_field(void);
		void	add_field(void);
};

void	Contact::set_field(void)
{
	memset (firstname, 0, 11);
	memset (lastname, 0, 11);
	memset (nickname, 0, 11);
	memset (phonenumber, 0, 20);
	memset (darkestsecret, 0, 11);
}

void	Contact::print_contact(int index)
{
	std::cout << index << "|";
	std::cout << firstname << "|";
	std::cout << lastname << "|";
	std::cout << nickname << "|" << std::endl;

}

void	Contact::add_field(void)
{
	std::cout << "Fistname :"; std::cin >> firstname;
	std::cout << "Lastname :"; std::cin >> lastname;
	std::cout << "Nickname :"; std::cin >> nickname;
	std::cout << "PhoneNumber :"; std::cin >> phonenumber;
	std::cout << "DarkestSecret :"; std::cin >> darkestsecret;
	std::cout << "ADD SUCCESS!!" << std::endl;
}

#endif
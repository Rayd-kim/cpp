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

void Contact::make_ten_char(std::string str)
{
	size_t	len;

	len = str.length();
	if (len > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
}

void	Contact::print_contact_short(int index)
{
	if (firstname.empty() == 0)
	{
		std::cout << std::setw(10) << index << "|";
		make_ten_char(firstname);std::cout << "|";
		make_ten_char(lastname);std::cout << "|";
		make_ten_char(nickname);
		std::cout << std::endl;
	}
	else
		std::cout << index << "contact is empty" << std::endl;
}

void	Contact::print_contact_all(void)
{
	
	if(firstname.empty())
	{
		std::cout <<"The contact for that index is empty.." << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << "Firstname : " << firstname << std::endl;
	std::cout << "Lastname : " << lastname << std::endl;
	std::cout << "Nickname : " << nickname << std::endl;
	std::cout << "PhoneNumber : " << phonenumber << std::endl;
	std::cout << "DarkedstSecret : " << darkestsecret << std::endl;
	std::cout << std::endl;
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
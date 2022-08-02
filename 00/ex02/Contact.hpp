#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darkestsecret;
	public:
		void	print_contact(int index);
		void	add_field(void);
		void	make_ten_char(std::string str);
};

void Contact::make_ten_char(std::string str)
{
	size_t	len;

	len = str.length();
	if (len < 10)
	{
		for (int i = 1; i + len < 10; i++)
			std::cout << " ";
		std::cout << str;
	}
	else if (len > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << str;
}

void	Contact::print_contact(int index)
{
	if (index > 0 && index < 9)
	{
		if (firstname.empty())
		{
			std::cout << "Empty contact num\n";
			return ;
		}
		std::cout << "         " <<index << "|";
		make_ten_char(firstname);std::cout << "|";
		make_ten_char(lastname);std::cout << "|";
		make_ten_char(nickname);
		std::cout << std::endl;
	}
	else
		std::cout << "Wrong Index" << std::endl;
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
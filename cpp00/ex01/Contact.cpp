/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:50:51 by youskim           #+#    #+#             */
/*   Updated: 2022/09/12 14:20:02 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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
		make_ten_char(firstname);
		std::cout << "|";
		make_ten_char(lastname);
		std::cout << "|";
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
	std::cout << "Fistname :"; getline(std::cin, firstname);
	std::cout << "Lastname :"; getline(std::cin, lastname);
	std::cout << "Nickname :"; getline(std::cin, nickname);
	std::cout << "PhoneNumber :"; getline(std::cin, phonenumber);
	std::cout << "DarkestSecret :"; getline(std::cin, darkestsecret);
	std::cout << "ADD SUCCESS!!" << std::endl;
}
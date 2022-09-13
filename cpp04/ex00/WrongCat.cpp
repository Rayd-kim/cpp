/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:34:56 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 16:38:35 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat class is constructed" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat class is destructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat &c)
{
	(*this) = c;
}

WrongCat& WrongCat::operator=(const WrongCat &c)
{
	WrongAnimal::operator=(c);
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow Meow" << std::endl;
}

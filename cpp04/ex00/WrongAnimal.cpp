/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:34:40 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 16:37:21 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal class is constructed" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal class is destructed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
	(*this) = a;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &a)
{
	type = a.type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "I'm just animal class, so can't make sound" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:22:59 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 16:22:59 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal class is constructed" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal class is destructed" << std::endl;
}

Animal::Animal(const Animal &a)
{
	(*this) = a;
}

Animal& Animal::operator=(const Animal &a)
{
	type = a.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (type);
}

void	Animal::makeSound(void) const
{
	std::cout << "I'm just animal class, so can't make sound" << std::endl;
}
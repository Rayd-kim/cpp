/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:23:32 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 16:23:33 by youskim          ###   ########.fr       */
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
	type = a.type;
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

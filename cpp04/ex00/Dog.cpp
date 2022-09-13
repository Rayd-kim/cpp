/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:22:26 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 16:22:27 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog class is constructed" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog class is destructed" << std::endl;
}

Dog::Dog(const Dog &d)
{
	(*this) = d;
}

Dog& Dog::operator=(const Dog &d)
{
	Animal::operator=(d);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof" << std::endl;
}
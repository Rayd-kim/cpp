/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:23:16 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 16:23:17 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog class is constructed" << std::endl;
}

Dog::Dog(const Dog &d)
{
	type = d.type;
	brain = new Brain();
	brain->copy_ideas(*d.brain);
	std::cout << "Dog class is copied" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog class is destructed" << std::endl;
}

Dog& Dog::operator=(const Dog &d)
{
	type = d.type;
	brain->copy_ideas(*d.brain);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:23:12 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 16:52:46 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat class is constructed" << std::endl;
}

Cat::Cat(const Cat &c)
{
	type = c.type;
	brain = new Brain();
	brain->copy_ideas(*c.brain);
	std::cout << "Cat class is copied" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat class is destructed" << std::endl;
}

Cat& Cat::operator=(const Cat &c)
{
	type = c.type;
	brain->copy_ideas(*c.brain);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow Meow" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:23:51 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 18:56:30 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	// const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n-----Type-----" << std::endl;

	// std::cout << meta->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;

	std::cout << "\n-----Sound-----" <<std::endl;

	i->makeSound();
	j->makeSound();
	// meta->makeSound();

	std::cout << std::endl;

	// delete meta;
	delete j;
	delete i;
	
	return (0);
}
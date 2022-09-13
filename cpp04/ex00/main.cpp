/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:22:31 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 16:41:23 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n-----Type-----" << std::endl;

	std::cout << meta->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;

	std::cout << "\n-----Sound-----" <<std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;

	// const WrongAnimal*	a = new WrongAnimal();
	// const WrongAnimal*	b = new WrongCat();

	// std::cout << "\n-----Type-----" << std::endl;

	// std::cout << a->getType() << " " << std::endl;
	// std::cout << b->getType() << " " << std::endl;

	// std::cout << "\n-----Sound-----" <<std::endl;

	// a->makeSound();
	// b->makeSound();

	// std::cout << std::endl;

	// delete a;
	// delete b;
	
	return (0);
}
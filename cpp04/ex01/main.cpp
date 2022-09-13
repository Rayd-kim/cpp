/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:23:21 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 18:56:55 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const int n = 4;
	const Animal*	animal[n] = {new Dog(), new Dog(), new Cat(), new Cat()};
	
	std::cout << std::endl;

	std::cout << "\n-----Type-----" << std::endl;

	for (int i = 0; i < n; i++)
		std::cout << i + 1 << " " << animal[i]->getType() << " " << std::endl;

	std::cout << "\n-----Sound-----" <<std::endl;

	for (int i = 0; i < n; i++)
	{
		std::cout << i + 1 << " is ";
		animal[i]->makeSound();
	}

	std::cout << std::endl;

	for (int i = 0; i < n; i++)
	{
		std::cout << i + 1 << " ";
		delete animal[i];
	}

	std::cout << std::endl;
	return (0);
}
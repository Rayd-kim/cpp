/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:29:35 by youskim           #+#    #+#             */
/*   Updated: 2022/09/12 14:29:36 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;

	zombie = zombieHorde(10, "zombie");
	zombie->announce();

	for (int i = 0; i < 10; i++)
		zombie[i].announce();
	delete[] zombie;
	return (0);
}
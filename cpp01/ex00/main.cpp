/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:29:01 by youskim           #+#    #+#             */
/*   Updated: 2022/09/12 14:29:02 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie1;
	Zombie	*zombie2;

	zombie1 = newZombie("zombie1");
	zombie1->announce();
	zombie2 = newZombie("zombie2");
	zombie2->announce();
	randomChump("zombie3");
	randomChump("zombie4");
	delete zombie1;
	delete zombie2;
	return (0);
}
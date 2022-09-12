/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:29:53 by youskim           #+#    #+#             */
/*   Updated: 2022/09/12 14:29:54 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*zombie;

	zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombie[i].enter_name(name, i + 1);
	return (zombie);
}
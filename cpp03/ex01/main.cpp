/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:43:49 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 15:22:54 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("A");
	ScavTrap	b("B");

	a.attack(b.my_name());
	b.takeDamage(a.my_attack_damage());

	b.attack(a.my_name());
	a.takeDamage(b.my_attack_damage());
	
	a.guardGate();
	b.guardGate();
	return (0);
}
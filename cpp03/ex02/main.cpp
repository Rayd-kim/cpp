/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:44:16 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 15:43:23 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	a("A");
	FragTrap	b("B");

	a.attack(b.my_name());
	b.takeDamage(a.my_attack_damage());

	b.attack(a.my_name());
	a.takeDamage(b.my_attack_damage());
	
	a.highFivesGuys();
	b.highFivesGuys();
	return (0);
}
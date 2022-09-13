/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:42:40 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 14:52:18 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("A");
	ClapTrap	b("B");
	
	a.attack(b.my_name());
	b.takeDamage(a.my_attack_damage());
	a.beRepaired(1);

	b.attack(a.my_name());
	a.takeDamage(b.my_attack_damage());
	b.beRepaired(1);
	return (0);
}
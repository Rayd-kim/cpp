/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:18:10 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 16:12:18 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
}

ScavTrap::ScavTrap(const ScavTrap &s)
{
	(*this) = s;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
	std::cout << name << " ScavTrap is constructed" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << my_name() << " ScavTrap is destroyed" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &s)
{
	ClapTrap::operator=(s);
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << my_name() << " ScavTrap is now in Gate Keeper Mode" << std::endl;
}

void	ScavTrap::attack(std::string target)
{
	std::cout << my_name() << " ScavTrap attacks " << target << ", causing " \
	<< my_attack_damage() << " points of damage!" << std::endl;
}

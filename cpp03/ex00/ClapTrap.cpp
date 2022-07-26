/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:42:30 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 14:50:59 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "default_construct";
	hit_point = 10;
	energy_point = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
	(*this) = c;
}

ClapTrap::ClapTrap(std::string name): name(name)
{
	hit_point = 10;
	energy_point = 10;
	attack_damage = 0;
	std::cout << name << " is Constructed..!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << name << " is Destructed..!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &c)
{
	name = c.name;
	hit_point = c.hit_point;
	energy_point = c.energy_point;
	attack_damage = c.attack_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << name << " attacks " << target << ", causing " \
	<< attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if(hit_point == 0)
		std::cout << "Sorry, " << name << "hit_point 0" << std::endl;
	else
	{
		std::cout << name << " take " << amount << " damage." << std::endl;
		hit_point -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_point == 0 && energy_point == 0)
		std::cout << "Sorry, " << name << "hit_point and energy_point 0" << std::endl;
	else if(hit_point == 0)
		std::cout << "Sorry, " << name << "hit_point 0" << std::endl;
	else if (energy_point == 0)
		std::cout << "Sorry, " << name << "energy_point 0" << std::endl;
	else
	{
		std::cout << name << " is repaired " << amount << " hp" << std::endl;
		hit_point += amount;
		energy_point--;
	}
}

unsigned int	ClapTrap::my_attack_damage(void)
{
	return (attack_damage);
}

std::string	ClapTrap::my_name(void)
{
	return (name);
}
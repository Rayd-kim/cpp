/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:30:19 by youskim           #+#    #+#             */
/*   Updated: 2022/09/12 14:30:19 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name_, Weapon &weapon_) : weapon(weapon_), name(name_)
{}

HumanA::~HumanA(void)
{}

void	HumanA::attack(void)
{
	std::cout << name;
	std::cout << " attacks with their ";
	std::cout << weapon.getType() << std::endl;
}
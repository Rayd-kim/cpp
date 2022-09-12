/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:29:47 by youskim           #+#    #+#             */
/*   Updated: 2022/09/12 16:01:42 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie::Zombie()
{
	name = "Default";
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::enter_name(std::string zombie_name, int index)
{
	std::stringstream	temp;

	temp << index;
	zombie_name.append(temp.str());
	name = zombie_name;
}

Zombie::~Zombie(void)
{
	std::cout << name << " is destroyed.." << std::endl;
}
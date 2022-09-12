/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:30:33 by youskim           #+#    #+#             */
/*   Updated: 2022/09/12 16:09:47 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type_)
{
	type = type_;
}

Weapon::~Weapon()
{
	std::cout << "Destructor" << std::endl;
}

const std::string&	Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(std::string param)
{
	type = param;
}
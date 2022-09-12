/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:30:59 by youskim           #+#    #+#             */
/*   Updated: 2022/09/12 17:04:13 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::string	Harl::lev[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

Harl::Harl()
{
	ptr[0] = &Harl::debug;
	ptr[1] = &Harl::info;
	ptr[2] = &Harl::warning;
	ptr[3] = &Harl::error;
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "Do debug" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "Do info" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "Do warning" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "Do error" << std::endl;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (!(level.compare(lev[i])))
		{
			(this->*ptr[i])();
			// (*this.*ptr[i])();
			return ;
		}
	}
	std::cout << "Please, input right complain" << std::endl;
}

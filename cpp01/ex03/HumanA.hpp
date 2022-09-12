/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:30:21 by youskim           #+#    #+#             */
/*   Updated: 2022/09/12 14:30:22 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA 
{
	private:
		Weapon		&weapon;
		std::string	name;
	
	public:
		HumanA(std::string name_, Weapon &weapon_);
		~HumanA();
		void attack(void);
};

# endif
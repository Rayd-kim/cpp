/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:30:26 by youskim           #+#    #+#             */
/*   Updated: 2022/09/12 14:30:26 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP


#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	name;
		Weapon	*weapon;
	public:
		HumanB(std::string name_);
		~HumanB();
		void	attack(void);
		void	setWeapon(Weapon &weapon_);
};

# endif 
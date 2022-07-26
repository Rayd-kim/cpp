/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:44:08 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 14:44:09 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class	ClapTrap{
	private:
		std::string	name;
		int			hit_point;
		int			energy_point;
		int			attack_damage;

	public:
		ClapTrap();
		ClapTrap(const ClapTrap &c);
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hit_point, int energy_point, int attack_damage);
		~ClapTrap();

		ClapTrap& operator=(const ClapTrap &c);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		unsigned int	my_attack_damage(void);
		std::string	my_name(void);
};

#endif
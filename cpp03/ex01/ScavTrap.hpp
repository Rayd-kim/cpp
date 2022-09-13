/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:43:59 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 16:12:21 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

	private:

	public:
		ScavTrap();
		ScavTrap(const ScavTrap &s);
		ScavTrap(std::string name);
		~ScavTrap();

		ScavTrap& operator=(const ScavTrap &s);

		void	guardGate(void);
		void	attack(std::string target);
};

# endif
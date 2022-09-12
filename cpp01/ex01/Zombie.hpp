/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:29:50 by youskim           #+#    #+#             */
/*   Updated: 2022/09/12 16:01:45 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP 
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string	name;
		
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	enter_name(std::string zombie_name, int index);
};

Zombie*	zombieHorde(int N, std::string name);

# endif
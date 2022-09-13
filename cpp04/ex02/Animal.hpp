/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:23:34 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 16:23:35 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(const Animal &a);
		virtual ~Animal();
		Animal& operator=(const Animal &a);

		std::string	getType(void) const;
		virtual void	makeSound(void) const = 0;
};

# endif
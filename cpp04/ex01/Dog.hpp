/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:23:18 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 16:55:27 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	private:
		Brain	*brain;

	public:
		Dog();
		~Dog();
		Dog(const Dog &d);
		Dog& operator=(const Dog &d);
		void	makeSound(void) const;
};

# endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:23:14 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 16:55:30 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain	*brain;

	public:
		Cat();
		~Cat();
		Cat(const Cat &c);
		Cat& operator=(const Cat &c);
		void	makeSound(void) const;
};

# endif
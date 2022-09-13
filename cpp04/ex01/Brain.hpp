/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:23:10 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 16:23:10 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class	Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain();
		~Brain();
		Brain(const Brain &b);
		Brain& operator=(const Brain &b);
		void	copy_ideas(const Brain &brain);
};

# endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:23:38 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 16:23:38 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain class is constructed" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain class is destructed" << std::endl;
}

Brain::Brain(const Brain &b)
{
	(*this) = b;
}

Brain& Brain::operator=(const Brain &b)
{
	copy_ideas(b);
	return (*this);
}

void	Brain::copy_ideas(const Brain &brain)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = brain.ideas[i];
}
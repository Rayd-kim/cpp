/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:37:47 by youskim           #+#    #+#             */
/*   Updated: 2022/09/28 17:06:30 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <iterator>

template <typename T>
void	easyfind(T& container, int i)
{
	typename T::iterator iter = container.begin();

	for (; iter != container.end(); iter++)
	{
		if (i == *iter)
		{
			std::cout << *iter << std::endl;
			return ;
		}
	}
	std::cerr << "Can't find " << i << std::endl;
}

# endif
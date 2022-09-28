/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:37:47 by youskim           #+#    #+#             */
/*   Updated: 2022/09/28 13:27:12 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
// #include <vector>
// #include <deque>
// #include <list>
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
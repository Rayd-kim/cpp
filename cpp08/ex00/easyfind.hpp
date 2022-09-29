/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:37:47 by youskim           #+#    #+#             */
/*   Updated: 2022/09/29 19:13:37 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <algorithm>

template <typename T>
void	easyfind(T& container, int i)
{
	try
	{
		typename T::iterator ret = find(container.begin(), container.end(), i);

		if (ret != container.end())
			std::cout << *ret << " is existed" << std::endl;
		else (throw -1);
	}
	catch(int)
	{
		std::cerr << i << "is not existed" <<std::endl;
	}
}

# endif
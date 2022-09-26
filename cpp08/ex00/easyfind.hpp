/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:37:47 by youskim           #+#    #+#             */
/*   Updated: 2022/09/26 16:25:12 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <iterator>

template <typename T>
void	easyfind(std::vector<T>& a, int i)
{
	typename std::vector<T>::iterator iter = a.begin();

	for (; iter != a.end(); iter++)
	{
		if (i == *iter)
		{
			std::cout << *iter << std::endl;
			return ;
		}

	}
	std::cout << "Can't find " << i << std::endl;
}

template <typename T>
void	easyfind(std::list<T>& a, int i)
{
	typename std::list<T>::iterator iter = a.begin();

	for (; iter != a.end(); iter++)
	{
		if (i == *iter)
		{
			std::cout << *iter << std::endl;
			return ;
		}

	}
	std::cout << "Can't find " << i << std::endl;
}

template <typename T>
void	easyfind(std::deque<T>& a, int i)
{
	typename std::deque<T>::iterator iter = a.begin();

	for (; iter != a.end(); iter++)
	{
		if (i == *iter)
		{
			std::cout << *iter << std::endl;
			return ;
		}
	}
	std::cout << "Can't find " << i << std::endl;
}

# endif
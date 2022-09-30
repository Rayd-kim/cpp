/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:37:47 by youskim           #+#    #+#             */
/*   Updated: 2022/09/30 12:56:26 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <algorithm>
#include <exception>

template <typename T>
typename T::iterator	easyfind(T& container, int i)
{
	
	typename T::iterator ret = find(container.begin(), container.end(), i);

	if (ret != container.end())
		return (ret);
	else
		throw (std::exception());
}

# endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:45:28 by youskim           #+#    #+#             */
/*   Updated: 2022/09/19 15:58:15 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	call_element(T *a, int len)
{
	for (int i = 0; i < len; i++)
	{
		std::cout << "Array " << i << " index value : " << a[i] << std::endl;
	}
}

template <typename T>
void	iter(T *a, int len, void (*f)(T*, int))
{
	f(a, len);
}

# endif
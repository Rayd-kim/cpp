/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:45:28 by youskim           #+#    #+#             */
/*   Updated: 2022/09/28 16:54:45 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	call_element(const T& a)
{
	std::cout << a << std::endl;
}

template <typename T>
void	iter(T *a, int len, void (*f)(const T&))
{
	for (int i = 0; i < len; i++)
		f(a[i]);
}

# endif
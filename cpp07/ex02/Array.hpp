/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:01:38 by youskim           #+#    #+#             */
/*   Updated: 2022/09/21 16:29:05 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <class T>
class	Array
{
	private:
		T*	arr;
		int	len;

	public:
		Array();
		Array(unsigned int n);
		Array(Array<T> &a);
		~Array();

		Array<T>&	operator=(Array<T> &a);
		unsigned int	size(void) const;
		T*	getArray(void);
		T&	operator[](int i);
};

# endif
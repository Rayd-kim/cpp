/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:01:38 by youskim           #+#    #+#             */
/*   Updated: 2022/09/26 18:22:25 by youskim          ###   ########.fr       */
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

template <class T>
Array<T>::Array()
{
	arr = NULL;
	len = 0;
}

template <class T>
Array<T>::Array(unsigned int n) : len(n)
{
	arr = new T[n];
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (len);
}

template <typename T>
T*	Array<T>::getArray(void)
{
	return (arr);
}

template <typename T>
T&	Array<T>::operator[](int i)
{
	if (i < 0 || i >= len)
		throw(std::exception());
	else
		return (arr[i]);
}

template <typename T>
Array<T>&	Array<T>::operator=(Array<T> &a)
{
	delete [] arr;
	len = a.size();
	arr = new T[len];
	for (int i = 0; i < len; i++)
		arr[i] = a.getArray()[i];
	return (*this);
}

template <typename T>
Array<T>::Array(Array<T> &a)
{
	len = a.size();
	arr = new T[len];
	for (int i = 0; i < len; i++)
		arr[i] = a.getArray()[i];
}

template <class T>
Array<T>::~Array()
{
	delete [] arr;
}

# endif
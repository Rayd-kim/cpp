/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:28:25 by youskim           #+#    #+#             */
/*   Updated: 2022/09/21 16:28:26 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

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
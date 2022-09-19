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
T&	Array<T>::operator[](int i)
{
	if (i < 0 || i >= len)
		throw(std::exception());
	else
		return (arr[i]);
}

template <class T>
Array<T>::~Array()
{
	delete []arr;
}
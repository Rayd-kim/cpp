/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:29:46 by youskim           #+#    #+#             */
/*   Updated: 2022/09/28 19:27:58 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	// arr.resize(0);
	len = 0;
}

Span::Span(unsigned int N)
{
	// arr.resize(N, 0);
	len = N;
}

Span::~Span()
{
}

void	Span::addNumber(int i)
{
	try
	{
	if (arr.size() < len)
		arr.push_back(i);
	else
		throw(std::exception());
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	Span::shortestSpan(void)
{
	try
	{
		if (arr.size() == 0 || arr.size() == 1)
			throw(std::exception());

		std::sort(arr.begin(), arr.end());
		std::vector<int>::iterator itr = arr.begin();
		std::vector<int>::iterator prev;
		int min = *(itr + 1) - *itr;
		while (itr != arr.end() - 1)
		{
			prev = itr;
			itr++;
			if (min > *itr - *prev)
				min = *itr - *prev;
		}
		return (min);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (-1);
}

int	Span::longestSpan(void)
{
	try
	{
		if (arr.size() == 0 || arr.size() == 1)
			throw(std::exception());
		std::sort(arr.begin(), arr.end());
		return (*(arr.end() - 1) - *arr.begin());
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (-1);
}
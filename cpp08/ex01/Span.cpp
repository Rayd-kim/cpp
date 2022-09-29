/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:29:46 by youskim           #+#    #+#             */
/*   Updated: 2022/09/29 19:43:31 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	arr.reserve(0);
	len = 0;
}

Span::Span(unsigned int N)
{
	arr.reserve(N);
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
		// std::sort(arr.begin(), arr.end());
		// return (*(arr.end() - 1) - *arr.begin());
		return (*(max_element(arr.begin(), arr.end())) - *(min_element(arr.begin(), arr.end())));
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (-1);
}
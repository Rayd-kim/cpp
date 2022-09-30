/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:29:46 by youskim           #+#    #+#             */
/*   Updated: 2022/09/30 14:12:06 by youskim          ###   ########.fr       */
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

Span::Span(const Span &s) : arr(s.arr)
{
	len = s.len;
}

Span& Span::operator=(const Span &s)
{
	arr = s.arr;
	len = s.len;
	return (*this);
}

void	Span::addNumber(int i)
{
	try
	{
	if (arr.size() < len)
		arr.push_back(i);
	else
		throw(Span::SpanFull());
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	Span::shortestSpan(void)
{
	if (arr.size() == 0 || arr.size() == 1)
		throw(Span::NotSpan());

	std::vector<int> temp(arr);
	std::sort(temp.begin(), temp.end());
	std::vector<int>::iterator itr = temp.begin();
	std::vector<int>::iterator prev;
	int min = *(itr + 1) - *itr;
	while (itr != temp.end() - 1)
	{
		prev = itr;
		itr++;
		if (min > *itr - *prev)
			min = *itr - *prev;
	}
	return (min);
}

int	Span::longestSpan(void)
{
	if (arr.size() == 0 || arr.size() == 1)
		throw(Span::NotSpan());
	return (*(max_element(arr.begin(), arr.end())) - *(min_element(arr.begin(), arr.end())));
}

const char*	Span::NotSpan::what() const throw()
{
	return ("This Span too short");
}

const char*	Span::SpanFull::what() const throw()
{
	return ("This Span is already full");
}

std::vector<int>	Span::getVector(void) const
{
	return (arr);
}

void	Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	
	// try
	// {

		std::cout << "add " << std::endl;
		
		for (; start != end; start++)
		{
			addNumber(*start + 1);
			std::cout << "add " << *start + 1 << std::endl;
			// if (arr.size() < len)
			// {
				
			// }
			// else
			// 	throw(Span::SpanFull());

		}
	// }
	// catch(std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
}
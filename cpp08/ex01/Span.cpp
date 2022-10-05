/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:29:46 by youskim           #+#    #+#             */
/*   Updated: 2022/10/05 18:56:40 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : arr(std::vector<int>(0)), len(0)
{
	std::cout << "Default Constructor" << std::endl;
}

Span::Span(unsigned int N) : arr(std::vector<int>(N)), len(N)
{
	arr.resize(0);
	std::cout << "Constructor" << std::endl;
}

Span::~Span()
{
	std::cout << "Destructor" << std::endl;
}

Span::Span(const Span &s) : arr(s.arr)
{
	len = s.len;
	std::cout << "Copy Constructor" << std::endl;
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
		std::cerr << i << " can't add. Because " << e.what() << std::endl;
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
	return ("Span too short");
}

const char*	Span::SpanFull::what() const throw()
{
	return ("Span is already full");
}

std::vector<int>	Span::getVector(void) const
{
	return (arr);
}

void	Span::addNumber(std::vector<int>::iterator start, std::vector<int>::const_iterator end)
{
	
	try
	{
		std::vector<int>::iterator itr = start;
		
		for (; start != end; start++)
		{
			itr = arr.end() - 1;
			if (arr.size() < len)
				arr.push_back(*itr + 1);
			else
				throw(Span::SpanFull());
		}
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
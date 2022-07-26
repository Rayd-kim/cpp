/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:29:40 by youskim           #+#    #+#             */
/*   Updated: 2022/09/30 14:42:24 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <exception>

class Span
{
	private:
		std::vector<int>	arr;
		unsigned int		len;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &s);
		~Span();

		Span& operator=(const Span &s);
		void	addNumber(int i);
		void	addNumber(std::vector<int>::iterator start, std::vector<int>::const_iterator end);
		int	shortestSpan(void);
		int	longestSpan(void);
		std::vector<int>	getVector(void) const;

		class NotSpan : public std::exception
		{
			public:
				const char*	what() const throw();
		};

		class SpanFull : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

#endif
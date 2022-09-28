/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:29:40 by youskim           #+#    #+#             */
/*   Updated: 2022/09/28 18:54:32 by youskim          ###   ########.fr       */
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
		~Span();
		void	addNumber(int i);
		int	shortestSpan(void);
		int	longestSpan(void);
};

#endif
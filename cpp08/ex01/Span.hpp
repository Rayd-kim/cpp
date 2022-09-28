/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:29:40 by youskim           #+#    #+#             */
/*   Updated: 2022/09/28 13:04:21 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
	private:
		std::vector<unsigned int>	*arr;

	public:
		Span();
		Span(unsigned int N);
		~Span();
		void	addNumber(void);
		void	shortestSpan(void);
		void	longestSpan(void);
};

Span::Span(unsigned int N)
{
	arr = new std::vector<unsigned int>[N];
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:29:34 by youskim           #+#    #+#             */
/*   Updated: 2022/09/30 14:08:35 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	Span add = Span(10);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	// sp.addNumber(10);

	add.addNumber(add.getVector().begin(), add.getVector().end());

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::cout << add.shortestSpan() << std::endl;
		std::cout << add.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	
	return 0;
}
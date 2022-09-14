/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:04:27 by youskim           #+#    #+#             */
/*   Updated: 2022/09/14 13:36:21 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	a("A", 1);
		Bureaucrat	b("B", 3);

		std::cout << a << std::endl;
		std::cout << b << std::endl;

		b.grade_up();
		std::cout << b << std::endl;
		b.grade_up();
		std::cout << b << std::endl;

		a.grade_up();
		std::cout << a << std::endl;

		// Bureaucrat	c("C", 0);
	}
	catch(const std::exception& e)
	{
		std::cout << "\nError: ";
		std::cout << e.what() << std::endl;
	}
	return (0);
}
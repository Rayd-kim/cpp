/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:04:27 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 19:04:28 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	a("A", 1);
		std::cout << a << std::endl;
		// std::cout << "name : " << a.getName() << std::endl;
		// std::cout << "grade : " << a.getGrade() << std::endl;

		Bureaucrat	b("B", 3);
		// b = a;
		std::cout << b << std::endl;
		// std::cout << "name : " << b.getName() << std::endl;
		// std::cout << "grade : " << b.getGrade() << std::endl;

		b.grade_up();
		std::cout << b << std::endl;
		b.grade_up();
		std::cout << b << std::endl;

		a.grade_up();
		std::cout << a << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
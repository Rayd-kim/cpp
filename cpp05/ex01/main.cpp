/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:04:52 by youskim           #+#    #+#             */
/*   Updated: 2022/09/14 13:38:30 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	a("A", 1);
		Bureaucrat	b("B", 3);

		std::cout << "\n----Bureaucrat Information----" << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;

		std::cout << std::endl;
		// Form	form("form", 0, 150);
	
		Form	form1("first", 1, 1);
		Form	form2("second", 3, 3);

		std::cout << "\n----Form Information----" << std::endl;
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		
		std::cout << "\n----Sign to Form----" << std::endl;
		a.signForm(form1);
		a.signForm(form2);
		b.signForm(form1);
		b.signForm(form2);

		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "\nError: ";
		std::cout << e.what() << std::endl;
	}
	return (0);
}
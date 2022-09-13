/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:04:52 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 19:35:35 by youskim          ###   ########.fr       */
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

		std::cout << a << std::endl;
		std::cout << b << std::endl;

		Form	form1("first", 1, 1);
		Form	form2("second", 3, 3);

		// a.signForm(form1);
		// a.signForm(form2);
		b.signForm(form1);
		b.signForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
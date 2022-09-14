/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:05:21 by youskim           #+#    #+#             */
/*   Updated: 2022/09/14 15:32:25 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{
	try
	{
		// Bureaucrat	excep("excep", 0);
		std::cout << "\n-----Bureaucrat Construct-----" << std::endl;
		Bureaucrat	a("A", 1);
		Bureaucrat	b("B", 30);
		Bureaucrat	c("C", 100);

		std::cout << "\n-----Inform-----" << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;

		std::cout << "\n----Form Construct----" << std::endl;
		Intern	intern;
		Form	*form1 = intern.makeForm("shrubbery creation", "First");
		Form	*form2 = intern.makeForm("robotomy request", "Second");
		Form	*form3 = intern.makeForm("presidential pardon", "Third");
		// Form	*form4 = intern.makeForm("hi", "hi");
		// if (form4 == NULL)
		// 	std::cout << "NULL" << std::endl;
			
		std::cout << "\n-----Sign-----" << std::endl;
		a.signForm(*form1);
		a.signForm(*form2);
		a.signForm(*form3);

		std::cout << "\n-----Execute-----" << std::endl;
		a.executeForm(*form1);
		a.executeForm(*form2);
		a.executeForm(*form3);
		// b.executeForm(form1);
		// b.executeForm(form2);
		// b.executeForm(form3);
		// c.executeForm(form1);
		// c.executeForm(form2);
		// c.executeForm(form3);
		std::cout << "\n----Destruct----" << std::endl;
		delete form1;
		delete form2;
		delete form3;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
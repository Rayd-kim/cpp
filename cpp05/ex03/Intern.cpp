/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:49:13 by youskim           #+#    #+#             */
/*   Updated: 2022/09/14 15:31:35 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

std::string	Intern::form_name[3] = {"shrubbery creation", "robotomy request", 
"presidential pardon"};

Intern::Intern()
{
	ptr[0] = &Intern::Shrubbery;
	ptr[1] = &Intern::Robotomy;
	ptr[2] = &Intern::Presidential;

	std::cout << "Intern Constructor" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern Destructor" << std::endl;
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (form_name[i].compare(name) == 0)
		{
			std::cout << "Intern creates " << name << std::endl;
			return ((this->*ptr[i])(target));
		}
	}
	std::cout << "Intern can't creates " << name << std::endl;
	return (NULL);
}

Form*	Intern::Shrubbery(std::string target)
{
	Form*	temp = new ShrubberyCreationForm(target);
	return (temp);
}

Form*	Intern::Robotomy(std::string target)
{
	Form*	temp = new RobotomyRequestForm(target);
	return (temp);
}

Form*	Intern::Presidential(std::string target)
{
	Form*	temp = new PresidentialPardonForm(target);
	return (temp);	
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:05:28 by youskim           #+#    #+#             */
/*   Updated: 2022/09/14 14:38:47 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form(name, 25, 5)
{
	std::cout << name << " PresidentialPardonForm Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& P) :
Form (P.getName(), P.getSignGrade(), P.getExecuteGrade())
{
	std::cout << "PresidentialPardonForm copy Constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << getName() << " PresidentialPardonForm Destructor" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &P)
{
	Form::operator=(P);
	return (*this);
}

bool	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (getSign())
	{
		if (executor.getGrade() <= getExecuteGrade())
		{
			std::cout << getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
			return (true);
		}
		else
			throw(Bureaucrat::GradeTooLowException());
	}
	else
	{
		std::cout << getName() << " PresidentialPardonForm is not signed" << std::endl;
		return (false);
	}
}

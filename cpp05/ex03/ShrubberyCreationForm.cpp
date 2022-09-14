/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:05:39 by youskim           #+#    #+#             */
/*   Updated: 2022/09/14 14:46:51 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name, 145, 137)
{
	std::cout << getName() << " ShrubberyCreationForm Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &S) :
Form(S.getName(), S.getSignGrade(), S.getExecuteGrade())
{
	std::cout << "Shrubbery copy constructor" << std::endl;
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << getName() << " ShrubberyCreationForm Destructor" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &S)
{
	Form::operator=(S);
	return (*this);
}

const char* ShrubberyCreationForm::FileOpenError::what() const throw()
{
	return ("File open Error");
}

void	ShrubberyCreationForm::executeShrubbery(void) const
{
	std::ofstream	file(getName());
	std::string	tree =  "-----O-----\n"
						"----OOO----\n"
						"---OOOOO---\n"
						"--OOOOOOO--\n"
						"-OOOOOOOOO-\n"
						"----[ ]----\n"
						"----[ ]----\n";

	if (!(file.fail()))
	{
		file << tree << std::endl;
	}
	else
		throw (ShrubberyCreationForm::FileOpenError());
	file.close();
	std::cout << "Shrubbery Creation" << std::endl;
}

bool	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (getSign())
	{
		if (executor.getGrade() <= getExecuteGrade())
		{
			executeShrubbery();
			return (true);
		}
		else
			throw(Bureaucrat::GradeTooLowException());
	}
	else
	{
		std::cout << getName() << " ShrubberyCreationForm is not signed" << std::endl;
		return (false);
	}
}

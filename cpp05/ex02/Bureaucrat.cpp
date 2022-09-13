/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:05:08 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 19:05:08 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade too Low");
}

Bureaucrat::Bureaucrat()
{
	std::cout << "Default constructor" << std::endl;
	std::cout << "Please, input parameter name, grade" << std::endl;
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
	std::cout << name << " Constructor" << std::endl;
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : name(b.name), grade(b.grade)
{
	std::cout << "copy constructor" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << name << " Destructor" << std::endl;
}

const std::string	Bureaucrat::getName(void) const
{
	return (name);
}

int	Bureaucrat::getGrade(void) const
{
	return (grade);
}

void	Bureaucrat::grade_up(void)
{
	std::cout << "Increase grade!" << std::endl;
	grade--;
	if (grade < 1)
		throw(Bureaucrat::GradeTooHighException());
}

void	Bureaucrat::grade_down(void)
{
	std::cout << "Decrease grade!" << std::endl;
	grade++;
	if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &b)
{
	const_cast<std::string&>(name) = b.name;
	this->grade = b.grade;
	return (*this);
}

void	Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		if (f.getSign())
			std::cout << "Bureaucrat " << name << " signed " << f.getName() << " Form" << std::endl;
		else
			std::cout << "Bureaucrat " << name << " couldn't sign " << f.getName() \
			<< " Form because grade too low" <<std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const &form)
{
	try
	{
		if (form.execute(*this))
			std::cout << name << " Bureaucrat excuted " << form.getName() << " Form" << std::endl;
		else
			std::cout << name << " Bureaucrat is not excuted " << form.getName() << " Form" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << name << " Bureaucrat is not excuted " << form.getName() << " Form" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
	out << b.getName();
	out << ", bureaucrat grade ";
	out << b.getGrade();
	return (out);
}

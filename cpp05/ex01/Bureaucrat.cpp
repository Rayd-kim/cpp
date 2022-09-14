/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:04:39 by youskim           #+#    #+#             */
/*   Updated: 2022/09/14 13:41:52 by youskim          ###   ########.fr       */
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

// Bureaucrat::Bureaucrat()
// {
// 	std::cout << "Default constructor" << std::endl;
// 	std::cout << "Please, input parameter name, grade" << std::endl;
// 	if (grade < 1)
// 		throw (Bureaucrat::GradeTooHighException());
// 	else if (grade > 150)
// 		throw (Bureaucrat::GradeTooLowException());
// }

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	std::cout << name << " Constructor" << std::endl;
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
	if (grade == 1)
		std::cout << "Already high grade, so can't grade up!" << std::endl;
	else
	{
		std::cout << "Increase grade!" << std::endl;
		grade--;
	}
}

void	Bureaucrat::grade_down(void)
{
	if (grade == 150)
		std::cout << "Already low grade, so can't grade down!" << std::endl;
	else
	{
		std::cout << "Decrease grade!" << std::endl;
		grade++;
	}
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
	}
	catch (const std::exception &e)
	{
		std::cout << "Bureaucrat " << name << " couldn't sign " << f.getName() << " Form because ";
		std::cout << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
	out << b.getName();
	out << ", bureaucrat grade ";
	out << b.getGrade();
	return (out);
}
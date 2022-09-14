/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:05:18 by youskim           #+#    #+#             */
/*   Updated: 2022/09/14 13:55:20 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class	Form
{
	private:
		const std::string name;
		bool	sign;
		const int	grade_sign;
		const int	grade_execute;
		Form();

	public:
		Form(const Form &f);
		Form(std::string name, int sign, int execute);
		virtual ~Form();

		Form& operator=(const Form &f);

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		const std::string	getName(void) const;
		int	getSignGrade(void) const;
		int	getExecuteGrade(void) const;
		bool		getSign(void) const;
		void	beSigned(const Bureaucrat &b);
		virtual	bool	execute(Bureaucrat const &executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, const Form &f);

# endif
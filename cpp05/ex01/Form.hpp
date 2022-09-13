/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:04:50 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 19:04:50 by youskim          ###   ########.fr       */
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

	public:
		Form();
		Form(const Form &f);
		Form(std::string name, int sign, int execute);
		~Form();

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
};

std::ostream& operator<<(std::ostream& out, const Form &f);

# endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:04:22 by youskim           #+#    #+#             */
/*   Updated: 2022/09/14 13:06:05 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class	Bureaucrat
{
	private:
		const std::string	name;
		int	grade;
		Bureaucrat();

	public:
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &b);
		~Bureaucrat();
		
		const std::string	getName(void) const;
		int	getGrade(void) const;
		void	grade_up(void);
		void	grade_down(void);
		
		class	GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		Bureaucrat& operator=(const Bureaucrat &b);
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat &b);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:50:07 by youskim           #+#    #+#             */
/*   Updated: 2022/09/14 15:22:20 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class 	Form;

class	Intern
{
	private:
		static std::string	form_name[3];
		Form*	(Intern::*ptr[3])(std::string);

	public:
		Intern();
		~Intern();
		
		Form*	makeForm(std::string name, std::string target);
		Form*	Shrubbery(std::string target);
		Form*	Robotomy(std::string target);
		Form*	Presidential(std::string target);
};

# endif
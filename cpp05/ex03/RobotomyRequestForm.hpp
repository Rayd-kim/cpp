/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:05:36 by youskim           #+#    #+#             */
/*   Updated: 2022/09/14 14:07:57 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_hpp
#define ROBOTOMYREQUESTFORM_hpp

#include "Form.hpp"
#include <cstdlib>
#include <ctime>

class	Form;

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm();

	public:
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm(const RobotomyRequestForm& R);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(const RobotomyRequestForm &R);

		bool	execute(Bureaucrat const &executor) const;
		void	randRobot(void) const;
};

#endif
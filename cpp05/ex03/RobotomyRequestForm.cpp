/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:05:33 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 19:05:34 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(name, 72, 45)
{
	std::cout << name << " RobotomyRequestForm Constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << " RobotomyRequestForm Destructor" << std::endl;
}

void	RobotomyRequestForm::randRobot(void) const
{
	srand((unsigned int)time(NULL));

	if (rand() % 2 == 0)
	{
		std::cout << "D...DD...DDDDD......DDDDD..." << std::endl;
		std::cout << getName() << " has been robotomized successfully" << std::endl;
	}
	else
		std::cout << getName() << " robotomy failed" << std::endl;
}

bool	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (getSign())
	{
		if (executor.getGrade() <= getExecuteGrade())
		{
			randRobot();
			return (true);
		}
		else
			throw(Bureaucrat::GradeTooLowException());
	}
	else
	{
		std::cout << getName() << " RobotomyRequestForm is not signed" << std::endl;
		return (false);
	}
}

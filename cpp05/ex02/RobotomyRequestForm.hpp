#ifndef ROBOTOMYREQUESTFORM.hpp
#define ROBOTOMYREQUESTFORM.hpp

#include "Form.hpp"

class	Form;

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm(const RobotomyRequestForm& R);
		~RobotomyRequestForm();

		bool	execute(Bureaucrat const &executor) const;
};

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(name, 72, 45)
{
	std::cout << name << " RobotomyRequestForm Constructor" << std::endl;
}

bool	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (getSign())
	{
		if (executor.getGrade() <= getExecuteGrade())
			return (true);
		else
			throw(Bureaucrat::GradeTooLowException());
	}
	else
	{
		std::cout << getName() << " RobotomyRequestForm is not signed" << std::endl;
		return (false);
	}
}

#endif
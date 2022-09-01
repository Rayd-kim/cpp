#ifndef ROBOTOMYREQUESTFORM_hpp
#define ROBOTOMYREQUESTFORM_hpp

#include "Form.hpp"
#include <cstdlib>
#include <ctime>

class	Form;

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm(const RobotomyRequestForm& R);
		~RobotomyRequestForm();

		bool	execute(Bureaucrat const &executor) const;
		void	randRobot(void) const;
};

#endif
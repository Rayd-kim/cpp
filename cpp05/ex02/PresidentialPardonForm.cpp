#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form(name, 25, 5)
{
	std::cout << name << " PresidentialPardonForm Constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << getName() << " PresidentialPardonForm Destructor" << std::endl;
}

bool	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (getSign())
	{
		if (executor.getGrade() <= getExecuteGrade())
		{
			std::cout << getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
			return (true);
		}
		else
			throw(Bureaucrat::GradeTooLowException());
	}
	else
	{
		std::cout << getName() << " PresidentialPardonForm is not signed" << std::endl;
		return (false);
	}
}

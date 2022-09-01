#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class	Form;

class	PresidentialPardonForm : public	Form 
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string name);
		PresidentialPardonForm(const PresidentialPardonForm& P);
		~PresidentialPardonForm();

		bool	execute(Bureaucrat const &executor) const;
};

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form(name, 25, 5)
{
	std::cout << name << " PresidentialPardonForm Constructor" << std::endl;
}

bool	PresidentialPardonForm::execute(Bureaucrat const &executor) const
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
		std::cout << getName() << " PresidentialPardonForm is not signed" << std::endl;
		return (false);
	}
}

#endif
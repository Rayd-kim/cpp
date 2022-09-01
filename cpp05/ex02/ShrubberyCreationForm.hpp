#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class Form;

class	ShrubberyCreationForm : public Form 
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name);
		ShrubberyCreationForm(const ShrubberyCreationForm &s);
		~ShrubberyCreationForm();

		bool	execute(Bureaucrat const &executor) const;
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name, 145, 137)
{
	std::cout << name << " ShrubberyCreationForm Constructor" << std::endl;
}

bool	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
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
		std::cout << getName() << " ShrubberyCreationForm is not signed" << std::endl;
		return (false);
	}
}

#endif
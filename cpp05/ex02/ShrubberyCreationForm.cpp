#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name, 145, 137)
{
	std::cout << getName() << " ShrubberyCreationForm Constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << getName() << " ShrubberyCreationForm Destructor" << std::endl;
}

const char* ShrubberyCreationForm::FileOpenError::what() const throw()
{
	return ("File open Error");
}

void	ShrubberyCreationForm::executeShrubbery(void) const
{
	std::ofstream	file(getName());
	std::string	tree =  "12345\n"
						"12345678";

	if (!(file.fail()))
	{
		file << tree << std::endl;
	}
	else
		throw (ShrubberyCreationForm::FileOpenError());
	file.close();
}

bool	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (getSign())
	{
		if (executor.getGrade() <= getExecuteGrade())
		{
			executeShrubbery();
			return (true);
		}
		else
			throw(Bureaucrat::GradeTooLowException());
	}
	else
	{
		std::cout << getName() << " ShrubberyCreationForm is not signed" << std::endl;
		return (false);
	}
}

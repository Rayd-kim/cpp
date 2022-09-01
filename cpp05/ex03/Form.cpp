#include "Form.hpp"

Form::Form() : name("default"), sign(false), grade_sign(0), grade_execute(0)
{
	std::cout << "Please, set the name, grade_sign and grade_execute" << std::endl;
	throw(Form::GradeTooHighException());
}

Form::Form(std::string name, int sign, int execute) :
name(name), grade_sign(sign), grade_execute(execute)
{
	sign = false;
	std::cout << name << " Form Constructor" << std::endl;
	if (grade_sign < 1 || grade_execute < 1)
		throw(Form::GradeTooHighException());
	if (grade_sign > 150 || grade_execute > 150)
		throw(Form::GradeTooLowException());
}

Form::Form(const Form &f) : name(f.name), sign(f.sign), grade_sign(f.grade_sign), grade_execute(f.grade_execute)
{
	std::cout << name << " copy constructor" << std::endl;
}

Form& Form::operator=(const Form &f)
{
	const_cast<std::string&>(name) = f.name;
	sign = f.sign;
	const_cast<int&>(grade_sign) = f.grade_sign;
	const_cast<int&>(grade_execute) = f.grade_execute;
	return (*this);
}

Form::~Form()
{
	std::cout << name << " Destructor" << std::endl;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form grade too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form grade too Low");
}

const std::string	Form::getName(void) const
{
	return (name);
}

int	Form::getSignGrade(void) const
{
	return (grade_sign);
}

int	Form::getExecuteGrade(void) const
{
	return (grade_execute);
}

bool	Form::getSign(void) const
{
	return (sign);
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= grade_sign)
		sign = true;
	else
		throw(Bureaucrat::GradeTooLowException());
}

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade too Low");
}

Bureaucrat::Bureaucrat()
{
	std::cout << "Default constructor" << std::endl;
	std::cout << "Please, input parameter name, grade" << std::endl;
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
	std::cout << name << " Constructor" << std::endl;
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : name(b.name), grade(b.grade)
{
	std::cout << "copy constructor" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << name << " Destructor" << std::endl;
}

const std::string	Bureaucrat::getName(void) const
{
	return (name);
}

int	Bureaucrat::getGrade(void) const
{
	return (grade);
}

void	Bureaucrat::grade_up(void)
{
	std::cout << "Increase grade!" << std::endl;
	grade--;
	if (grade < 1)
		throw(Bureaucrat::GradeTooHighException());
}

void	Bureaucrat::grade_down(void)
{
	std::cout << "Decrease grade!" << std::endl;
	grade++;
	if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &b)
{
	const_cast<std::string&>(name) = b.name;
	this->grade = b.grade;
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
	out << b.getName();
	out << ", bureaucrat grade ";
	out << b.getGrade();
	return (out);
}
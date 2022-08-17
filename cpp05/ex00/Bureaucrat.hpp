#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class	Bureaucrat
{
	private:
		const std::string	name;
		int	grade;

	public:
		Bureaucrat();
		~Bureaucrat();
		const std::string	getName(void);
		int	getGrade(void);
};

const std::string	Bureaucrat::getName(void)
{
	return (name);
}

int	Bureaucrat::getGrade(void)
{
	return (grade);
}

#endif
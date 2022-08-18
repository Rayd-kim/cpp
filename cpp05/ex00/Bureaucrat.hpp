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
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &b);
		~Bureaucrat();
		const std::string	getName(void) const;
		int	getGrade(void) const;

		class	GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		Bureaucrat& operator=(const Bureaucrat &b);
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat &b);

#endif
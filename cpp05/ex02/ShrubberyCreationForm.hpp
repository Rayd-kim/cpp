#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class	Bureaucrat;

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &S);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &S);

	public:
		ShrubberyCreationForm(std::string name);
		~ShrubberyCreationForm();

		void	executeShrubbery(void) const;
		bool	execute(Bureaucrat const &executor) const;

		class	FileOpenError : public std::exception
		{
			public:
				const char* what() const throw();
		};
};


# endif
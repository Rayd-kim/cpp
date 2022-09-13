/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:05:41 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 19:05:41 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
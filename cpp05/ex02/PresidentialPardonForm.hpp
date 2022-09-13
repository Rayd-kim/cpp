/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:05:31 by youskim           #+#    #+#             */
/*   Updated: 2022/09/13 19:05:31 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class	PresidentialPardonForm : public	Form 
{
	private:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& P);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &P);
	public:
		PresidentialPardonForm(std::string name);
		~PresidentialPardonForm();

		bool	execute(Bureaucrat const &executor) const;
};


#endif
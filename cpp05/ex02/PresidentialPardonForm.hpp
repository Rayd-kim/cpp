/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:05:31 by youskim           #+#    #+#             */
/*   Updated: 2022/09/14 14:14:00 by youskim          ###   ########.fr       */
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
		
	public:
		PresidentialPardonForm(std::string name);
		PresidentialPardonForm(const PresidentialPardonForm& P);
		~PresidentialPardonForm();
		PresidentialPardonForm& operator=(const PresidentialPardonForm &P);

		bool	execute(Bureaucrat const &executor) const;
};

#endif
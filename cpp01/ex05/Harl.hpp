/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:31:01 by youskim           #+#    #+#             */
/*   Updated: 2022/09/12 14:31:01 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		static std::string lev[4];
		void	(Harl::*ptr[4])();

	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};

#endif
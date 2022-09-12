/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:31:03 by youskim           #+#    #+#             */
/*   Updated: 2022/09/12 17:04:09 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;
	
	harl.complain("DEBUG");
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("ERROR");
	return (0);
}
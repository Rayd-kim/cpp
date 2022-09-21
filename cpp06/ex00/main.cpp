/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:25:04 by youskim           #+#    #+#             */
/*   Updated: 2022/09/21 16:25:04 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int	main(int argc, char *argv[])
{
	std::string	arg;

	if (argc != 2)
	{
		std::cout << "Please, input right parameter." << std::endl;
		return (0);
	}
	arg = argv[1];

	conversion(arg);
	return (0);
}

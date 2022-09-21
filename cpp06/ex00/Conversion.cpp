/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:24:59 by youskim           #+#    #+#             */
/*   Updated: 2022/09/21 16:25:00 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

void	conversion(std::string arg)
{
	if( (arg[0] > 32 && arg[0] < 127) && !(arg[0] >= '0' && arg[0] <= '9') && arg.length() == 1)
		conversion_c(arg);
	else if ((static_cast<int>(arg.find('f')) != -1 && check_inf_nan(arg) != DOU) || \
			(static_cast<int>(arg.find('f')) != -1 && static_cast<int>(arg.find('.')) != -1) || check_inf_nan(arg) == FLO)
		conversion_f(arg);
	else if (check_inf_nan(arg) == DOU || static_cast<int>(arg.find('.')) != -1)
		conversion_d(arg);
	else
		conversion_i(arg);
}

void	conversion_c(std::string arg)
{
	char c = arg[0];
	std::cout << "char: ";
	std::cout << "\'" << c << "\'" << std::endl;
	int	i = static_cast<int>(c);
	float f = static_cast<float>(c);
	double d = static_cast<double>(c);

	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	conversion_i(std::string arg)
{
	int	i = atoi(arg.c_str());
	unsigned char c = static_cast<unsigned char>(i);
	float f = static_cast<float>(i);
	double d = static_cast<double>(i);

	if (i < 0 || i > 127)
		std::cout << "char: " << "impossible" << std::endl;
	else if (c < 33 || c > 126)
		std::cout << "char: " << "Not displayable" << std::endl;
	else
		std::cout << "char: " << "\'" << c << "\'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}


void	conversion_f(std::string arg)
{
	float f = atof(arg.c_str());
	int	i = static_cast<int>(f);
	unsigned char c = static_cast<unsigned char>(f);
	double d = static_cast<double>(f);

	if (check_inf_nan(arg) == FLO)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
		return ;
	}
	else if (i < 0 || i > 127)
		std::cout << "char: " << "impossible" << std::endl;
	else if (c < 33 || c > 126)
		std::cout << "char: " << "Not displayable" << std::endl;
	else
		std::cout << "char: " << "\'" << c << "\'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	conversion_d(std::string arg)
{
	double d = strtod(arg.c_str(), NULL);
	int	i = static_cast<int>(d);
	unsigned char c = static_cast<unsigned char>(d);
	float f = static_cast<float>(d);

	if (check_inf_nan(arg) == DOU)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
		return ;
	}
	else if (i < 0 || i > 127)
		std::cout << "char: " << "impossible" << std::endl;
	else if (c < 33 || c > 126)
		std::cout << "char: " << "Not displayable" << std::endl;
	else
		std::cout << "char: " << "\'" << c << "\'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

int	check_inf_nan(std::string arg)
{
	if (!arg.compare("-inff") || !arg.compare("+inff") || !arg.compare("nanf") || !arg.compare("inff"))
		return (FLO);
	else if (!arg.compare("-inf") || !arg.compare("+inf") || !arg.compare("inf") || !arg.compare("nan"))
		return (DOU);
	else
		return (0);
}
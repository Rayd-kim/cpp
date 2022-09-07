#include "Conversion.hpp"

void	conversion_i(std::string arg)
{
	try
	{
		std::cout << "int: ";
		int	i = std::stoi(arg);
		std::cout << i << std::endl;
	}
	catch(...)
	{
		std::cout << "conversion impossible" << std::endl;
	}
}

void	conversion_c(std::string arg)
{
	try
	{
		std::cout << "char: ";
		int	i = std::stoi(arg);
		if (i < 33 || i > 126)
			std::cout << "Not displayable" << std::endl;
		else
			std::cout << "\'" <<(char)i << "\'" << std::endl;
	}
	catch(...)
	{
		std::cout << "conversion impossible" << std::endl;
	}
}

void	conversion_f(std::string arg)
{
	try
	{
		std::cout << "float: ";
		float f = std::stof(arg);
		std::cout << f << "f" << std::endl;
	}
	catch(...)
	{
		std::cout << "conversion impossible" << std::endl;
	}
}

void	conversion_d(std::string arg)
{
	try
	{
		std::cout << "double: ";
		double d = std::stod(arg);
		std::cout << d << std::endl;
	}
	catch(...)
	{
		std::cout << "conversion impossible" << std::endl;
	}
}
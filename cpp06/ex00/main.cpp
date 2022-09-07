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

	conversion_c(arg);
	conversion_i(arg);
	conversion_f(arg);
	conversion_d(arg);
	return (0);
}

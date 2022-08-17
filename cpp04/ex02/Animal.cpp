#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal class is constructed" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal class is destructed" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (type);
}

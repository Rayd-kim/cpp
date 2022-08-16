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

void	Animal::makeSound(void) const
{
	std::cout << "I'm just animal class, so can't make sound" << std::endl;
}
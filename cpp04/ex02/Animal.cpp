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

Animal::Animal(const Animal &a)
{
	type = a.type;
}

Animal& Animal::operator=(const Animal &a)
{
	type = a.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (type);
}

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog class is constructed" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog class is destructed" << std::endl;
}

Dog::Dog(const Dog &d)
{
	(*this) = d;
}

Dog& Dog::operator=(const Dog &d)
{
	Animal::operator=(d);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof" << std::endl;
}
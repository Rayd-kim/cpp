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

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof" << std::endl;
}
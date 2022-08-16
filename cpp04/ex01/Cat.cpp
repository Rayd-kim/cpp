#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat class is constructed" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat class is destructed" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow Meow" << std::endl;
}

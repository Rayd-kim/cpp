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

Cat::Cat(const Cat &c)
{
	(*this) = c;
}

Cat& Cat::operator=(const Cat &c)
{
	Animal::operator=(c);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow Meow" << std::endl;
}

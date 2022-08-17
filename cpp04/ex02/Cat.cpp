#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat class is constructed" << std::endl;
}

Cat::Cat(const Cat &c)
{
	type = c.type;
	brain = new Brain();
	brain->copy_ideas(*c.brain);
	std::cout << "Cat class is copied" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat class is destructed" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow Meow" << std::endl;
}

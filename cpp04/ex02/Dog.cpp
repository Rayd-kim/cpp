#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog class is constructed" << std::endl;
}

Dog::Dog(const Dog &d)
{
	type = d.type;
	brain = new Brain();
	brain->copy_ideas(*d.brain);
	std::cout << "Dog class is copied" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog class is destructed" << std::endl;
}

Dog& Dog::operator=(const Dog &d)
{
	type = d.type;
	brain->copy_ideas(*d.brain);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof" << std::endl;
}
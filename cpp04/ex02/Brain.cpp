#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain class is constructed" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain class is destructed" << std::endl;
}

void	Brain::copy_ideas(Brain &brain)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = brain.ideas[i];
}
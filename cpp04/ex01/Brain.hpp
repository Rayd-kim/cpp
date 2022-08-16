#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class	Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain();
		~Brain();
};

Brain::Brain()
{
	std::cout << "Brain class is constructed" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain class is destructed" << std::endl;
}

# endif
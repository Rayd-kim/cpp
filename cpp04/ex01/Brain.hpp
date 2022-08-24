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
		Brain(const Brain &b);
		Brain& operator=(const Brain &b);
		void	copy_ideas(const Brain &brain);
};

# endif
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &d);
		Dog& operator=(cosnt Dog &d);
		void	makeSound(void) const;
};

# endif
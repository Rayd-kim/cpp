#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(const Animal &a);
		virtual ~Animal();
		Animal& operator=(const Animal &a);

		std::string	getType(void) const;
		virtual void	makeSound(void) const = 0;
};

# endif
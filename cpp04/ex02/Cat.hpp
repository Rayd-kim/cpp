#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private:

	public:
		Brain	*brain;
		Cat();
		~Cat();
		Cat(const Cat &c);
		void	makeSound(void) const;
};

# endif
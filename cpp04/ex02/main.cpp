#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const int n = 4;
	const Animal*	animal[n] = {new Dog(), new Dog(), new Cat(), new Cat()};
	
	std::cout << std::endl;
	
	const Cat a;
	const Cat d(a);

	std::cout << a.brain << std::endl;
	std::cout << d.brain << std::endl;

	std::cout << "\n-----Type-----" << std::endl;

	for (int i = 0; i < n; i++)
		std::cout << i + 1 << " " << animal[i]->getType() << " " << std::endl;

	std::cout << "\n-----Sound-----" <<std::endl;

	for (int i = 0; i < n; i++)
	{
		std::cout << i + 1 << " is ";
		animal[i]->makeSound();
	}

	std::cout << std::endl;

	for (int i = 0; i < n; i++)
		delete animal[i];

	std::cout << std::endl;
	return (0);
}
#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;

	zombie = zombieHorde(10, "zombie");
	zombie->announce();

	for (int i = 0; i < 10; i++)
		zombie[i].announce();
	delete[] zombie;
}
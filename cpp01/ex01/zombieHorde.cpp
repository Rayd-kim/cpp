#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*zombie;

	zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombie[i].enter_name(name, i + 1);
	return (zombie);
}
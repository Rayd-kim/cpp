#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*zombie;

	zombie = new Zombie;
	zombie->enter_name(name);
	return (zombie);
}
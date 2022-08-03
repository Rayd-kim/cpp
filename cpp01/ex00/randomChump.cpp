#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	zombie;

	zombie.enter_name(name);
	zombie.announce();
}
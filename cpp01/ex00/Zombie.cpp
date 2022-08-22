#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "Noname";
}

Zombie::Zombie(std::string name) : name(name)
{
}

void	Zombie::announce(void)
{
	std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << name << " is destroyed.." << std::endl;
}
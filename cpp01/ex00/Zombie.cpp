#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::enter_name(std::string zomebie_name)
{
	name = zomebie_name;
}

Zombie::~Zombie(void)
{
	std::cout << name << " is destroyed.." << std::endl;
}
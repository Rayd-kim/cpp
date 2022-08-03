#include "Zombie.hpp"
#include <sstream>

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::enter_name(std::string zomebie_name, int index)
{
	std::stringstream	temp;

	temp << index;
	zomebie_name.append(temp.str());
	name = zomebie_name;
}

Zombie::~Zombie(void)
{
	std::cout << name << " is destroyed.." << std::endl;
}
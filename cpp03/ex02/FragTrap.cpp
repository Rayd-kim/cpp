#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) :  ClapTrap(name, 100, 100, 30)
{
	std::cout << my_name() << " FragTrap is constructed" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << my_name() << " FragTrap is destroyed" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << my_name() << " FragTrap positive high fives request" << std::endl;
}
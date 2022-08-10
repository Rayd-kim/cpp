#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
	std::cout << name << " ScavTrap constructed" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << my_name() << " ScavTrap destroyed" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << my_name() << " ScavTrap is now in Gate Keeper Mode" << std::endl;
}

void	ScavTrap::attack(std::string target)
{
	std::cout << my_name() << " ScavTrap attacks " << target << ", causing " \
	<< my_attack_damage() << " points of damage!" << std::endl;
}

#include "HumanB.hpp"

HumanB::HumanB(std::string name_)
{
	name = name_;
	weapon = NULL;
}

HumanB::~HumanB()
{}

void	HumanB::attack(void)
{
	std::cout << name;
	std::cout << " attacks with their ";
	std::cout << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon_)
{
	weapon = &weapon_;
}

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
	if (weapon != NULL)
	{
		std::cout << name;
		std::cout << " attacks with their ";
		std::cout << weapon->getType() << std::endl;
	}
	else
	{
		std::cout << name << " : Please, set the weapon first" << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon_)
{
	weapon = &weapon_;
}

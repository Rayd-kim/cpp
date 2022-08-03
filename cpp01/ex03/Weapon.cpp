#include "Weapon.hpp"

Weapon::Weapon(std::string type_)
{
	type = type_;
}

Weapon::~Weapon()
{}

const std::string&	Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(std::string param)
{
	type = param;
}
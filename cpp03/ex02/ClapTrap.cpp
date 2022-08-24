#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "default construct";
	hit_point = 100;
	energy_point = 50;
	attack_damage = 20;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
	(*this) = c;
}

ClapTrap::ClapTrap(std::string name): name(name)
{
	hit_point = 10;
	energy_point = 10;
	attack_damage = 0;
	std::cout << name << " ClapTrap is Constructed" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hit_point, int energy_point, int attack_damage):
name(name), hit_point(hit_point), energy_point(energy_point), attack_damage(attack_damage)
{
	std::cout << name << " ClapTrap is Constructed" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << name << " ClapTrap is Destructed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &c)
{
	name = c.name;
	hit_point = c.hit_point;
	energy_point = c.energy_point;
	attack_damage = c.attack_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << name << " ClapTrap attacks " << target << ", causing " \
	<< attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if(hit_point == 0)
		std::cout << "Sorry, " << name << "hit_point 0" << std::endl;
	else
	{
		std::cout << name << " ClapTrap take " << amount << " damage." << std::endl;
		hit_point -= amount;
	}
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_point == 0 && energy_point == 0)
		std::cout << "Sorry, " << name << "hit_point and energy_point 0" << std::endl;
	else if(hit_point == 0)
		std::cout << "Sorry, " << name << "hit_point 0" << std::endl;
	else if (energy_point == 0)
		std::cout << "Sorry, " << name << "energy_point 0" << std::endl;
	else
	{
		std::cout << name << " is repaired " << amount << " hp" << std::endl;
		hit_point += amount;
		energy_point--;
	}
}

unsigned int	ClapTrap::my_attack_damage(void)
{
	return (attack_damage);
}

std::string	ClapTrap::my_name(void)
{
	return (name);
}
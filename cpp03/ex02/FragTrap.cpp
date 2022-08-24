#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{

}

FragTrap::FragTrap(const FragTrap &f)
{
	(*this) = f;
}

FragTrap& FragTrap::operator=(const FragTrap &f)
{
	ClapTrap::operator=(f);
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << my_name() << " FragTrap is destroyed" << std::endl;
}

FragTrap::FragTrap(std::string name) :  ClapTrap(name, 100, 100, 30)
{
	std::cout << my_name() << " FragTrap is constructed" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << my_name() << " FragTrap positive high fives request" << std::endl;
}
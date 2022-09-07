#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("A");
	ScavTrap	b("B");

	a.ClapTrap::attack(b.my_name());
	b.takeDamage(a.my_attack_damage());

	b.attack(a.my_name());
	a.takeDamage(b.my_attack_damage());
	
	a.guardGate();
	b.guardGate();
	return (0);
}
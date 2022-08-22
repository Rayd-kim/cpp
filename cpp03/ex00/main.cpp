#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("A");
	ClapTrap	b("B");
	// ClapTrap	c;
	
	a.attack(b.my_name());
	b.takeDamage(a.my_attack_damage());
	a.beRepaired(1);

	b.attack(a.my_name());
	a.takeDamage(b.my_attack_damage());
	b.beRepaired(1);
	return (0);
}
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("A");
	ClapTrap	b("B");

	a.attack(b.my_name());
	b.takeDamage(a.my_attack_damege());
	a.beRepaired(1);

	b.attack(a.my_name());
	a.takeDamage(b.my_attack_damege());
	b.beRepaired(1);
	return (0);
}
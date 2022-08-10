#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("A");
	ScavTrap	b("B");

	a.attack(b.my_name());

	b.attack(a.my_name());
	a.guardGate();
	b.guardGate();
	return (0);
}
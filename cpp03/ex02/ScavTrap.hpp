#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

	private:

	public:
		ScavTrap();
		ScavTrap(const ScavTrap &s);
		ScavTrap(std::string name);
		~ScavTrap();

		ScavTrap& operator=(const ScavTrap &s);

		void	guardGate(void);
		void	attack(std::string target);
};

# endif
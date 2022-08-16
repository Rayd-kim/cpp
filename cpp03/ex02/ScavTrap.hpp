#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

	private:

	public:
		ScavTrap(std::string name);
		~ScavTrap();
		void	guardGate(void);
		void	attack(std::string target);
};

# endif
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class	ClapTrap{
	private:
		std::string	name;
		int			hit_point;
		int			energy_point;
		int			attack_damage;

	public:
		ClapTrap(std::string name);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		unsigned int	my_attack_damage(void);
		std::string	my_name(void);
};

#endif
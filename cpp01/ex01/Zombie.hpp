#ifndef ZOMBIE_HPP 
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string	name;
		
	public:
		~Zombie();
		void	announce(void);
		void	enter_name(std::string zombie_name, int index);
};

Zombie	*newZombie(std::string name);
Zombie*	zombieHorde(int N, std::string name);

# endif
#ifndef ZOMBIE_HPP 
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string	name;
		
	public:
		void	announce(void);
		void	enter_name(std::string zombie_name);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

# endif
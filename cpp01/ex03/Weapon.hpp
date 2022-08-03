#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(std::string type_);
	~Weapon();
	const std::string&	getType(void);
	void	setType(std::string param);
};

# endif
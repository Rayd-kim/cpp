#ifndef	HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "Do debug" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "Do info" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "Do warning" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "Do error" << std::endl;
}

void	Harl::complain(std::string level)
{
	
}

#endif
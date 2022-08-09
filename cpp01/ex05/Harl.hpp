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
		static std::string lev[4];
		void	(Harl::*ptr[4])();

	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};

#endif
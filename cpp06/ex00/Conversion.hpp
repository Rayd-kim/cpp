#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <string>

#define FLO 1
#define DOU 2

void	conversion(std::string arg);
void	conversion_i(std::string arg);
void	conversion_c(std::string arg);
void	conversion_f(std::string arg);
void	conversion_d(std::string arg);
int		check_inf_nan(std::string arg);

#endif
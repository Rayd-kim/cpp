/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:30:49 by youskim           #+#    #+#             */
/*   Updated: 2022/09/12 14:30:49 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Please input only three parameters" << std::endl;
		return (0);
	}

	const std::string	filename = argv[1];
	const std::string	s1 = argv[2];
	const std::string	s2 = argv[3];
	std::string	txt;

	std::ifstream in(filename);
	
	if (!(in.is_open()))
	{
		std::cout << "Not exit file" << std::endl;
		return (0);
	}
	else
	{
		std::ofstream out(filename + ".replace");
		if (!(out.is_open()))
			std::cout << "replace file opne fail.." << std::endl;
		int	i;
		while (in)
		{
			getline(in, txt);
			i = txt.find(s1);
			while (i != -1)
			{
				txt.erase(i, s1.length());
				txt.insert(i, s2);
				i = txt.find(s1);
			}
			out << txt;
			out << "\n";
		}
	}
}

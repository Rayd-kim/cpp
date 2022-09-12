/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:30:49 by youskim           #+#    #+#             */
/*   Updated: 2022/09/12 18:34:54 by youskim          ###   ########.fr       */
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
	
	if (in.is_open())
	{
		std::ofstream out(filename + ".replace");
		if (!(out.is_open()))
		{
			std::cout << "replace file opne fail.." << std::endl;
			in.close();
			return (0);
		}
		int	i;
		int	len;
		while (getline(in, txt))
		{
			len = 0;
			i = txt.find(s1, len);
			while (i != -1)
			{
				txt.erase(i, s1.length());
				txt.insert(i, s2);
				len = s2.length() + i;
				i = txt.find(s1, len);
			}
			out << txt;
			out << "\n";
		}
		in.close();
	}
	else
	{
		std::cout << "Not exit file" << std::endl;
		return (0);
	}
	return (0);
}

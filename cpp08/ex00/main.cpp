/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:37:41 by youskim           #+#    #+#             */
/*   Updated: 2022/09/30 12:57:40 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int	main(void)
{
	std::vector<int> a;

	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);

	std::deque<int> b;

	b.push_back(1);
	b.push_back(2);
	b.push_back(3);
	b.push_back(4);
	b.push_back(5);

	std::list<int> c;

	c.push_back(1);
	c.push_back(2);
	c.push_back(3);
	c.push_back(4);
	c.push_back(5);
	
	try
	{
		std::cout << *easyfind(a, 1) << std::endl;
		std::cout << *easyfind(b, 5) << std::endl;
		std::cout << *easyfind(c, 7) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
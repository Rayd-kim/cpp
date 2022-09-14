/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:36:34 by youskim           #+#    #+#             */
/*   Updated: 2022/09/14 18:40:38 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.hpp"

Base	*generate(void)
{
	srand(time(NULL));

	if (rand() % 3 == 1)
	{
		std::cout << "class A generate" << std::endl;
		return (new A);
	}
	else if (rand() % 3 == 2)
	{
		std::cout << "class B generate" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "class C generate" << std::endl;
		return (new C);
	}
}

void	identify(Base* p)
{
	try
	{
		A *a = dynamic_cast<A*>(p);
		if (a == 0)
			throw(1);
		std::cout << "P is A" << std::endl;
	}
	catch(...)
	{
		try
		{
			B *b = dynamic_cast<B*>(p);
			if (b == 0)
				throw(1);
			std::cout << "P is B" << std::endl;
		}
		catch(...)
		{
			std::cout << "P is C" << std::endl;
		}
	}
}

void	identify(Base &p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "P is A" << std::endl;
	}
	catch(...)
	{
		try
		{
			B b = dynamic_cast<B&>(p);
			std::cout << "P is B" << std::endl;
		}
		catch(...)
		{
			std::cout << "P is C" << std::endl;
		}
	}
}

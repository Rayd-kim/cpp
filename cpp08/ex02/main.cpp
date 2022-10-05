/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:28:57 by youskim           #+#    #+#             */
/*   Updated: 2022/10/05 17:33:15 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	for (int i = 1; i < 6; i++)
		mstack.push(i);
	
	std::cout << "--Top & Size--" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << mstack.size() << std::endl;
	mstack.pop();

	std::cout << "\n--After pop--" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << mstack.size() << std::endl;

	std::cout << "\n--Using iterator--" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}

	std::cout << "\n--cbegin & cend--" << std::endl;
	MutantStack<int>::const_iterator cit = mstack.cbegin();
	MutantStack<int>::const_iterator cite = mstack.cend();
	for (; cit != cite; cit++)
		std::cout << *cit << std::endl;

	std::cout << "\n--rbegin & rend--" << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	for (; rit != rite; rit++)
		std::cout << *rit << std::endl;
	
	std::cout << "\n--crbegin & crend--" << std::endl;
	MutantStack<int>::const_reverse_iterator crit = mstack.crbegin();
	MutantStack<int>::const_reverse_iterator crite = mstack.crend();
	for (; crit != crite; crit++)
		std::cout << *crit << std::endl;

	std::cout << "\n--Copy--" << std::endl;
	MutantStack<int> copy(mstack);
	MutantStack<int>::iterator iter = copy.begin();
	MutantStack<int>::iterator end = copy.end();

	for (; iter != end; iter++)
		std::cout << *iter << std::endl;

	std::cout << "\n--operator--" << std::endl;
	MutantStack<int> a;
	a = mstack;
	MutantStack<int>::iterator opit = a.begin();
	MutantStack<int>::iterator opite = a.end();

	for (; opit != opite; opit++)
		std::cout << *opit << std::endl;
	return 0;
}

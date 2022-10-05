/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:29:07 by youskim           #+#    #+#             */
/*   Updated: 2022/10/05 17:36:08 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>
#include <deque>
#include <list>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		typedef typename	std::stack<T, Container>::container_type::iterator iterator;
		typedef typename	std::stack<T, Container>::container_type::const_iterator const_iterator;
		typedef typename	std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
		typedef typename	std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;
		

		MutantStack() : std::stack<T, Container>()
		{
			std::cout << "Constructor" << std::endl;
		}
		~MutantStack()
		{
			std::cout << "Destructor" << std::endl;
		}
		MutantStack(const MutantStack& M) : std::stack<T, Container>(M)
		{
			std::cout << "Copy Constructor" << std::endl;
		}

		MutantStack& operator=(const MutantStack& M)
		{
			std::stack<T, Container>::operator=(M);
			return (*this);
		}
		
		iterator begin(void)
		{
			return (this->c.begin());
		}
		const_iterator cbegin(void)
		{
			return (this->c.cbegin());
		}
		reverse_iterator rbegin(void)
		{
			return (this->c.rbegin());
		}
		const_reverse_iterator crbegin(void)
		{
			return (this->c.crbegin());
		}

		iterator end(void)
		{
			return (this->c.end());
		}
		const_iterator cend(void)
		{
			return (this->c.cend());
		}
		reverse_iterator rend(void)
		{
			return (this->c.rend());
		}
		const_reverse_iterator crend(void)
		{
			return (this->c.crend());
		}
};

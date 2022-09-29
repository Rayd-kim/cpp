/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:29:07 by youskim           #+#    #+#             */
/*   Updated: 2022/09/29 20:26:17 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		std::stack<T>	stack;

	public:
		MutantStack()
		{
			std::cout << "Constructor" << std::endl;
		}

		~MutantStack()
		{
			std::cout << "Destructor" << std::endl;
		}
		
		std::stack<T>&	getStack(void)
		{
			return (stack);
		}
		
		// <T>::iterator	begin(void)
		// {
		// 	return (c.begin());
		// }
};
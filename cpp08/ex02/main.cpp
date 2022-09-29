/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:28:57 by youskim           #+#    #+#             */
/*   Updated: 2022/09/29 20:25:34 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void)
{
	MutantStack<int>	mutant;

	std::cout << mutant.empty() << std::endl;
	std::cout << mutant.getStack().empty() << std::endl;
	// mutant.begin();
		
	
}
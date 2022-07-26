/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:25:20 by youskim           #+#    #+#             */
/*   Updated: 2022/09/21 16:25:20 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int	main(void)
{
	uintptr_t	a;
	Data		*b = new Data;
	b->a = 1;
	b->b = 2;
	b->c = 3;

	std::cout << "---Before serialize---" << std::endl;
	std::cout << b->a << std::endl;
	std::cout << b->b << std::endl;
	std::cout << b->c << std::endl;

	std::cout << "\n---After serialize---" << std::endl;
	a = serialize(b);
	std::cout << a << std::endl;

	std::cout << "\n---After deserialize---" << std::endl;
	b = deserialize(a);
	std::cout << b->a << std::endl;
	std::cout << b->b << std::endl;
	std::cout << b->c << std::endl;
	
	delete b;
}

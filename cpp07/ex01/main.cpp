/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:45:23 by youskim           #+#    #+#             */
/*   Updated: 2022/09/19 16:07:04 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int	a[5] = {1, 2, 3, 4, 5};
	char	b[6] = "abcde";
	float	c[4] = {0.01, 42.1, 42.2, 42.3};

	std::cout << "Int array" << std::endl;
	iter<int>(a, 5, &call_element);

	std::cout << "\nChar array" << std::endl;
	iter<char>(b, 6, &call_element);

	std::cout << "\nFloat array" << std::endl;
	iter<float>(c, 4, &call_element);

	return (0);
}
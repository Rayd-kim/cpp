/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:45:23 by youskim           #+#    #+#             */
/*   Updated: 2022/09/19 16:20:32 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int	a[5] = {1, 2, 3, 4, 5};
	char	b[6] = "abcde";

	std::cout << "Int array" << std::endl;
	iter<int>(a, 5, &call_element);

	std::cout << "\nChar array" << std::endl;
	iter<char>(b, 6, &call_element);

	return (0);
}
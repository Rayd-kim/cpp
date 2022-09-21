/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:25:28 by youskim           #+#    #+#             */
/*   Updated: 2022/09/21 16:25:29 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "function.hpp"

int	main(void)
{
	Base *base = generate();

	identify(base);
	identify(*base);
	delete base;
	return (0);
}
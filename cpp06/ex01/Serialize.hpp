/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:10:17 by youskim           #+#    #+#             */
/*   Updated: 2022/09/14 16:11:15 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <iostream>

typedef	struct s_Data
{
	int	a;
	int	b;
	int	c;
}		Data;

uintptr_t	serialize(Data* ptr);
Data*	deserialize(uintptr_t raw);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:30:32 by youskim           #+#    #+#             */
/*   Updated: 2022/09/19 15:44:45 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T& a, T& b)
{
	T	temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T	min(T& a, T& b)
{
	if (a == b)
		return (b);
	else if (a > b)
		return (b);
	else
		return (a);
}

template <typename T>
T	max(T& a, T& b)
{
	if (a == b)
		return (b);
	else if (a > b)
		return (a);
	else
		return (b);
}

# endif
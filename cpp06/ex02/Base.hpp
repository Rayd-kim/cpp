/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:34:56 by youskim           #+#    #+#             */
/*   Updated: 2022/09/14 18:39:23 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class	Base
{
	public:
		virtual	~Base();
};

class	A : public Base
{
};

class	B : public Base
{
};

class	C : public Base
{
};


#endif
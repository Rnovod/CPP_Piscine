/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/24 21:07:08 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/24 21:35:05 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "identify.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int				num = std::rand() % 3;

	if (num == 0) {
		return static_cast<Base *>(new A());
	} else if (num == 1) {
		return static_cast<Base *>(new B());
	} else {
		return static_cast<Base *>(new C());
	}
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p)) {
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B *>(p)) {
		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C *>(p)) {
		std::cout << "C" << std::endl;
	}
	return ;
}

void	identify_from_reference(Base &p)
{
	try
	{
		static_cast<void>(dynamic_cast<A &>(p));
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast & e)
	{
		try
		{
			static_cast<void>(dynamic_cast<B &>(p));
			std::cout << "B" << std::endl;
		}
		catch (std::bad_cast & e)
		{
			try
			{
				static_cast<void>(dynamic_cast<C &>(p));
				std::cout << "C" << std::endl;
			}
			catch (std::bad_cast & e) {}
		}
	}
	return ;
}

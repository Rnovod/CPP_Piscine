/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 20:57:37 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 20:57:38 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {

	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &obj) {

	*this = obj;
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::~AssaultTerminator(void) {

	std::cout << "I'll be back ..." << std::endl;
	return ;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const & obj) {

	if (this != &obj) {
		(void)obj;
	}
	return *this;
}

ISpaceMarine	*AssaultTerminator::clone(void) const {

	ISpaceMarine	*clone = new AssaultTerminator(*this);
	return clone ;
}

void			AssaultTerminator::battleCry(void) const {

	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
	return ;
}

void			AssaultTerminator::rangedAttack(void) const {

	std::cout << "* does nothing *" << std::endl;
	return ;
}

void			AssaultTerminator::meleeAttack(void) const {

	std::cout << "* attacks with chainfists *" << std::endl;
	return ;
}

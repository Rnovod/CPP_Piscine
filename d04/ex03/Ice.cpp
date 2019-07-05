/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:59:55 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/06 19:59:56 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(void): AMateria("ice") {

	return ;
}

Ice::Ice(std::string const & type): AMateria("ice")
{
	(void)type;
	return ;
}

Ice::Ice(Ice const & obj): AMateria(obj) {

	return ;
}

Ice::~Ice(void) {

	return ;
}

Ice*	Ice::clone(void) const {

	Ice *newice = new Ice("ice");

	return newice;
}

void		Ice::use(ICharacter& target) {

	this->setXP();
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:59:33 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/06 19:59:34 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void): AMateria("cure") {

	return ;
}

Cure::Cure(std::string const & type): AMateria("cure") {

	(void)type;
	return ;
}

Cure::Cure(Cure const & obj): AMateria(obj) {

	return ;
}

Cure::~Cure() {

	return ;
}

Cure*	Cure::clone(void) const {

	Cure *newcure = new Cure("cure");

	return newcure;
}

void		Cure::use(ICharacter & target) {

	this->setXP();
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	return ;
}

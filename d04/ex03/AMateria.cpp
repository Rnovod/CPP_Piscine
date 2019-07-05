/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:59:10 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/06 19:59:11 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void): _type(""), _xp(0) {

	return ;
}

AMateria::AMateria(std::string const & type): _type(type), _xp(0) {

	return ;
}

AMateria::AMateria(AMateria const & obj){

	if (this != &obj) {
		*this = obj;
	}
	return ;
}

AMateria::~AMateria() {

	return ;
}

AMateria &	AMateria::operator=(AMateria const & obj) {

	this->_xp = obj.getXP();
	return *this;
}

std::string const &	AMateria::getType(void) const{

	return this->_type;
}

unsigned int		AMateria::getXP(void) const{

	return this->_xp;
}

void				AMateria::setXP(void){

	this->_xp += 10;
	return ;
}

void		AMateria::use(ICharacter & target)
{
	(void)target;
	return ;
}

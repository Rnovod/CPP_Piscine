/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 12:32:55 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 12:32:56 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) {

	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
	this->_name = name;
	return ;
}

Victim::Victim(Victim const & obj) {

	*this = obj;
	return ;
}

Victim & Victim::operator=(Victim const & obj) {

	if (this != &obj) {
		this->_name = obj._name;
	}
	return *this;
}

Victim::~Victim(void) {

	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
	return ;
}

void				Victim::SetName(std::string const & name) {

	this->_name = name;
	return ;
}

std::string const &	Victim::GetName(void) const {

	return this->_name;
}

void	Victim::getPolymorphed(void) const {

	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
	return ;
}

std::ostream & 		operator<<(std::ostream & o, Victim const & obj) {

	o << "I'm " << obj.GetName() << " and I like otters !" << std::endl;
	return o;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:13:15 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 15:13:16 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name) : Victim(name) {

	std::cout << "Igo-go." << std::endl;
	this->_name = name;
	return ;
}

Pony::Pony(Pony const & obj) : Victim(obj) {

	*this = obj;
	return ;
}

Pony & Pony::operator=(Pony const & obj) {

	if (this != &obj) {
		this->_name = obj._name;
	}
	return *this;
}

Pony::~Pony(void) {

	std::cout << "*Horse scream*" << std::endl;
	return ;
}

void				Pony::SetName(std::string const & name) {

	this->_name = name;
	return ;
}

std::string const &	Pony::GetName(void) const {

	return this->_name;
}

void				Pony::getPolymorphed(void) const {

	std::cout << this->_name << " has been turned into a little, ugly frog !" << std::endl;
	return ;
}

std::ostream & 		operator<<(std::ostream & o, Pony const & obj) {

	o << "I'm " << obj.GetName() << " and I like otters !" << std::endl;
	return o;
}

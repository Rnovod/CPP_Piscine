/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 12:33:08 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 12:33:08 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {

	std::cout << "Zog zog." << std::endl;
	this->_name = name;
	return ;
}

Peon::Peon(Peon const & obj) : Victim(obj) {

	*this = obj;
	return ;
}

Peon & Peon::operator=(Peon const & obj) {

	if (this != &obj) {
		this->_name = obj._name;
	}
	return *this;
}

Peon::~Peon(void) {

	std::cout << "Bleuark..." << std::endl;
	return ;
}

void				Peon::SetName(std::string const & name) {

	this->_name = name;
	return ;
}

std::string const &	Peon::GetName(void) const {

	return this->_name;
}

void				Peon::getPolymorphed(void) const {

	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
	return ;
}

std::ostream & 		operator<<(std::ostream & o, Peon const & obj) {

	o << "I'm " << obj.GetName() << " and I like otters !" << std::endl;
	return o;
}

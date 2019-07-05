/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 12:32:44 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 12:32:45 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) {

	std::cout << name << ", " << title << ", is born !" << std::endl;
	this->_name = name;
	this->_title = title;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const & obj) {

	*this = obj;
	return ;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & obj) {

	if (this != &obj) {
		this->_name = obj._name;
		this->_title = obj._title;
	}
	return *this;
}

Sorcerer::~Sorcerer(void) {

	std::cout << this->_name << ", " << this->_title <<
	", is dead. Consequences will never be the same !" << std::endl;
	return ;
}

void				Sorcerer::SetName(std::string const & name) {

	this->_name = name;
	return ;
}

std::string const &	Sorcerer::GetName(void) const {

	return this->_name;
}

void				Sorcerer::SetTitle(std::string const & title) {

	this->_title = title;
	return ;
}

std::string const &	Sorcerer::GetTitle(void) const {

	return this->_title;
}

void				Sorcerer::polymorph(Victim const & obj) const {

	obj.getPolymorphed();
	return ;
}

std::ostream & 		operator<<(std::ostream & o, Sorcerer const & obj) {

	o << "I am " << obj.GetName() << ", " << obj.GetTitle() << ", and I like ponies !" << std::endl;

	return o;
}

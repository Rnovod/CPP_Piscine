/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 10:50:51 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/03 10:50:52 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	return ;
}

Weapon::~Weapon(void) {
	return ;
}

std::string const &	Weapon::getType(void) {
	return this->_type;
}

void				Weapon::setType(std::string type) {
	this->_type = type;
	return ;
}

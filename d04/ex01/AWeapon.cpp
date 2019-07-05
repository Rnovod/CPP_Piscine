/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:27:30 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 16:27:31 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _damage(damage), _apcost(apcost) {

	return ;
}

AWeapon::AWeapon(AWeapon const & obj) {

	*this = obj;
	return ;
}

AWeapon::~AWeapon(void) {

	return ;
}

AWeapon & AWeapon::operator=(AWeapon const & obj) {

	if (this != &obj) {
		this->_name = obj.getName();
		this->_apcost = obj.getAPCost();
		this->_damage = obj.getDamage();
	}
	return *this;
}

std::string	AWeapon::getName(void) const {

	return this->_name;
}

int			AWeapon::getAPCost(void) const {

	return this->_apcost;
}

int			AWeapon::getDamage(void) const {

	return this->_damage;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:29:12 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 16:29:13 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name), _weapon(NULL), _ap(40) {

	return;
}

Character::Character(Character const  & obj) {

	*this = obj;
	return;
}

Character::~Character(void) {

	return;
}

Character &		Character::operator=(Character const & obj) {

	if (this != &obj) {
		this->_name = obj._name;
		this->_weapon = obj._weapon;
		this->_ap = obj._ap;
	}
	return *this;
}

std::string		Character::getName(void) const {

	return this->_name;
}

int				Character::getAP(void) const {

	return this->_ap;
}

AWeapon*		Character::getWeapon(void) const {

	return this->_weapon;
}

void			Character::recoverAP(void) {

	this->_ap = this->_ap + 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void			Character::equip(AWeapon *weapon) {

	this->_weapon = weapon;
	return;
}

void			Character::attack(Enemy *enemy) {

	if (!enemy->getHP() || !this->_weapon)
		return;
	if (this->_ap && this->_ap >= this->_weapon->getAPCost()) {

		std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		enemy->takeDamage(this->_weapon->getDamage());
		this->_ap = this->_ap - this->_weapon->getAPCost();
		if (enemy->getHP() <= 0)
			delete enemy;
	}
	return;
}

std::ostream	&	operator<<(std::ostream &o, Character const & obj) {

	if (obj.getWeapon()) {
		o << obj.getName() << " has " << obj.getAP() << " AP and wields a " << obj.getWeapon()->getName() << std::endl;
	}
	else {
		o << obj.getName() << " has " << obj.getAP() << " AP and is unarmed" << std::endl;
	}
	return (o);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:28:12 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 16:28:12 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _type(type), _hp(hp) {
	return;
}

Enemy::Enemy(Enemy const & obj) {

	*this = obj;
	return ;
}

Enemy::~Enemy(void) {

	return ;
}

Enemy & Enemy::operator=(Enemy const & obj) {

	if (this != &obj) {
		this->_hp = obj._hp;
		this->_type = obj._type;
	}
	return *this;
}

std::string		Enemy::getType() const {

	return this->_type;
}

int				Enemy::getHP() const {

	return this->_hp;
}

void			Enemy::setHP(int const hp) {

	this->_hp = hp;
	return ;
}

void			Enemy::takeDamage(int amount) {

	if (amount < 0)
		return ;
	else if (amount > this->_hp) {
		this->_hp = 0;
		return ;
	}
	this->_hp = this->_hp - amount;
	return ;
}


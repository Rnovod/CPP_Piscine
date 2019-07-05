/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 10:50:45 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/03 10:50:46 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	return ;
}

HumanB::~HumanB() {
	return ;
}

void	HumanB::attack(void) {
	if (this->_club->getType() == "") {
		this->_club->setType("melee");
	}
	std::cout << this->_name << " attacks with his " <<
	this->_club->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& club) {
	this->_club = &club;
	return ;
}

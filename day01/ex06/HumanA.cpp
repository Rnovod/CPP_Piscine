/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 10:50:34 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/03 10:50:35 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& club) : _name(name), _club(club) {
	return ;
}

HumanA::~HumanA() {
	return ;
}

void	HumanA::attack(void) {
	if (this->_club.getType() == "") {
		this->_club.setType("melee");
	}
	std::cout << this->_name << " attacks with his " <<
	this->_club.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon club) {
	this->_club = club;
	return ;
}

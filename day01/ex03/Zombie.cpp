/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:08:03 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/02 17:08:05 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	return ;
}

Zombie::Zombie(std::string name, std::string type) {

	this->_name = name;
	this->_type = type;
	if (this->_type == "")
		this->_type = "bastard";
	return ;
}

Zombie::~Zombie(void) {
	std::cout << "A zombie " << this->_name << " died!" << std::endl;
	return ;
}

void		Zombie::announce(void) {

	std::cout << "<" << this->_name
		<< " (" << this->_type
		<< ")> Braiiiiiiinnnssss..." << std::endl;
}

void		Zombie::SetZombieName(std::string name) {
	this->_name = name;
	return ;
}

std::string	Zombie::GetZombieName(void) const {
	return this->_name;
}
	
void		Zombie::SetZombieType(std::string type) {
	this->_type = type;
	return ;
}

std::string	Zombie::GetZombieType(void) const {
	return this->_type;
}

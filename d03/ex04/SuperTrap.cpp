/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 21:36:06 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/04 21:36:06 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) : ClapTrap("SUPERMAN"), FragTrap("SUPERMAN"), NinjaTrap("SUPERMAN") {

	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeDamage = 60;
	this->_rangedDamage = 20;
	this->_armor = 5;
	this->_name = "SUPERMAN";
	std::cout << "<" << this->_name  << ">: Now we can to play a little bit!" << std::endl;
	return ;
}

SuperTrap::SuperTrap(std::string const name) : ClapTrap(name), FragTrap(name), NinjaTrap(name) {

	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeDamage = 60;
	this->_rangedDamage = 20;
	this->_armor = 5;
	this->_name = name;
	std::cout << "<" << this->_name << ">: Now we can to play a little bit!" << std::endl;
	return ;
}

SuperTrap::SuperTrap(SuperTrap const & obj) : ClapTrap(obj), FragTrap(obj), NinjaTrap(obj){

	*this = obj;
	std::cout << "<" << this->_name << ">: Superman fly back to Crypton!" << std::endl;
	return ;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & obj) {

	if (this != &obj) {
		ClapTrap::operator=(obj);
	}
	return *this;
}

SuperTrap::~SuperTrap() {

	std::cout << "<" << this->_name << ">: WHAT!? I can't die... Trap..." << std::endl;
	return ;
}

void	SuperTrap::rangedAttack(std::string const & target) {

	FragTrap::rangedAttack(target);
	std::cout << "<" << this->_name << ">: Fill the pain!" << std::endl;
}

void	SuperTrap::meleeAttack(std::string const & target) {

	NinjaTrap::meleeAttack(target);
	std::cout << "<" << this->_name << ">: I smash you!" << std::endl;
}

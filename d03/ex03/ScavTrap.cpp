/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 16:53:47 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/04 16:53:48 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("C-3PO") {

	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_meleeDamage = 20;
	this->_rangedDamage = 15;
	this->_armor = 3;
	this->_name = "C-3PO";
	std::cout << "<" << this->_name  << ">: Aaeeeee! I'm ready to do some crazy things.. I think i do...!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name) {

	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_meleeDamage = 20;
	this->_rangedDamage = 15;
	this->_armor = 3;
	this->_name = name;
	std::cout << "<" << this->_name << ">: Aaeeeee! I'm ready to do some crazy things.. I think i do...!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & obj) {

	std::cout << "<" << this->_name << ">: Take my body!" << std::endl;
	*this = obj;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & obj) {

	if (this != &obj) {
		this->_HP = obj._HP;
		this->_maxHP = obj._maxHP;
		this->_energyPoints = obj._energyPoints;
		this->_maxEnergyPoints = obj._maxEnergyPoints;
		this->_lvl = obj._lvl;
		this->_meleeDamage = obj._meleeDamage;
		this->_rangedDamage = obj._rangedDamage;
		this->_armor = obj._armor;
		this->_name = obj._name;
	}
	return *this;
}

ScavTrap::~ScavTrap() {

	std::cout << "<" << this->_name << ">: Recycling, again...!" << std::endl;
	return ;
}

void		ScavTrap::challengeNewcomer(void) {

	std::string		challenges[10] = { "jump on a tree and scream like Tarzan",
									"went to a beauty salon, everyone wants to be beautiful",
									"finding fault with the traveler",
									"run like crazy and scream",
									"asks the iron god to give him more RAM",
									"went to crush the Liliputs",
									"catch butterflies",
									"began to striptease, but then he realized that he is a robot and he is already naked",
									"relaxes with grapefruit",
									"distributes tig to bocal members" };

	if (this->_energyPoints >= 15) {
		this->_energyPoints -= 15;
		std::cout << "<" << this->_name << "> " << challenges[rand() % 10] << std::endl;
	}
	else {
		std::cout << "<" << this->_name << "> " << "Not enough mana" << std::endl;
	}
}

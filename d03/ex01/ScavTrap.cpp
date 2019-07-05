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

ScavTrap::ScavTrap(void) : _HP(100), _maxHP(100), _energyPoints(50),
		_maxEnergyPoints(50), _lvl(1), _meleeDamage(20),
		_rangedDamage(15), _armor(3), _name("C-3PO") {

	std::cout << "<" << this->_name  << ">: Aaeeeee! I'm ready to do some crazy things.. I think i do...!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string const name) : _HP(100), _maxHP(100), _energyPoints(50),
		_maxEnergyPoints(50), _lvl(1), _meleeDamage(20),
		_rangedDamage(15), _armor(3) {

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

void		ScavTrap::rangedAttack(std::string const & target) {

	std::cout << "<" << this->_name << 
	"> attacks <" << target << "> at range, causing <" <<
	this->_rangedDamage << "> points of damage !" << std::endl << "<" << this->_name <<
	">: Oops... Sorry i didn't want it" << std::endl;
	return ;
}

void		ScavTrap::meleeAttack(std::string const & target) {

	std::cout << "<" << this->_name <<
	"> attacks <" << target << "> at melee, causing <" <<
	this->_meleeDamage << "> points of damage !" << std::endl << "<" << this->_name <<
	">: *Kgh*" << std::endl;
	return ;
}

void		ScavTrap::takeDamage(unsigned int amount) {

	if (amount < this->_armor) {
		std::cout << "<" << this->_name << "> armor reduce <" << amount << "> points of damage" << std::endl;
		std::cout << "<" << this->_name << ">: I think i felt something" << std::endl;
		return ;
	}
	else
		amount -= this->_armor;
	std::cout << "<" << this->_name <<
		"> take damage, causing <" <<
		amount << "> points of damage !" << std::endl;
	if (this->_HP <= amount) {
		std::cout << "<" << this->_name << "> is dead. We will remember him..." << std::endl;
		this->_HP = 0;
	}
	else {
		std::cout << "<" << this->_name <<
		">: Aaaaaaahhh!! I don't wanna die!" << std::endl;
		this->_HP -= amount;
	}
	return ;
}

void		ScavTrap::beRepaired(unsigned int amount) {

	if (this->_HP != this->_maxHP)
		this->_HP += amount;
	else {
		std::cout << "<" << this->_name << "> has full HP" << std::endl;
		return ;
	}
	if (this->_HP > this->_maxHP) {
		this->_HP = this->_maxHP;
	}
	std::cout << "<" << this->_name <<
		"> be repaired, +" << amount << " points to HP" << std::endl;
	std::cout << "<" << this->_name << ">: This healing feeling is wonderful!" << std::endl;
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

std::string ScavTrap::GetName(void) const {

	std::cout << "My friends call me " << "<" << this->_name << "> " << std::endl;
	return this->_name;
}

void		ScavTrap::SetName(std::string const & name) {

	std::cout << "<" << this->_name << "> " << "Oh, new name... i don't like..." << std::endl;
	this->_name = name;
	return ;
}

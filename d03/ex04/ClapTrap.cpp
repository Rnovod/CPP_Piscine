/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 18:36:15 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/04 18:36:16 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _HP(100), _maxHP(100), _energyPoints(100),
		_maxEnergyPoints(100), _lvl(1), _meleeDamage(30),
		_rangedDamage(20), _armor(5), _name("Robocop") {

	std::cout << "<" << this->_name  << ">: Clap... clap... i was born!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const name) : _HP(100), _maxHP(100), _energyPoints(100),
		_maxEnergyPoints(100), _lvl(1), _meleeDamage(30),
		_rangedDamage(20), _armor(5) {

	this->_name = name;
	std::cout << "<" << this->_name << ">: Clap... clap... i was born!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & obj) {

	std::cout << "<" << this->_name << ">: Clap... Hello, my copy." << std::endl;
	*this = obj;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & obj) {

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

ClapTrap::~ClapTrap() {

	std::cout << "<" << this->_name << ">: Clap... Bye bye, human!" << std::endl;
	return ;
}

void		ClapTrap::rangedAttack(std::string const & target) {

	std::cout << "<" << this->_name << 
	"> attacks <" << target << "> at range, causing <" <<
	this->_rangedDamage << "> points of damage !" << std::endl << "<" << this->_name <<
	">: Catch my hand, and bit yourself! CLAP!" << std::endl;
	return ;
}

void		ClapTrap::meleeAttack(std::string const & target) {

	std::cout << "<" << this->_name <<
	"> attacks <" << target << "> at melee, causing <" <<
	this->_meleeDamage << "> points of damage !" << std::endl << "<" << this->_name <<
	">: CLAAAAAAAAAAP!! I will clap you!" << std::endl;
	return ;
}

void		ClapTrap::takeDamage(unsigned int amount) {

	if (amount < this->_armor) {
		std::cout << "<" << this->_name << "> armor reduce <" << amount << "> points of damage" << std::endl;
		std::cout << "<" << this->_name << ">: You can't clap me!" << std::endl;
		return ;
	}
	else
		amount -= this->_armor;
	std::cout << "<" << this->_name <<
		"> take damage, causing <" <<
		amount << "> points of damage !" << std::endl;
	if (this->_HP <= amount) {
		std::cout << "<" << this->_name << "> is dead. No one will clap..." << std::endl;
		this->_HP = 0;
	}
	else {
		std::cout << "<" << this->_name <<
		">: Ughhhhh... You claped me?!" << std::endl;
		this->_HP -= amount;
	}
	return ;
}

void		ClapTrap::beRepaired(unsigned int amount) {

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
	std::cout << "<" << this->_name << ">: Now i can clap more! HA HA! CLAP CLAP!" << std::endl;
	return ;
}

std::string ClapTrap::GetName(void) const {

	return this->_name;
}

void		ClapTrap::SetName(std::string const & name) {

	std::cout << "<" << this->_name << "> " << "Oh, new name!" << std::endl;
	this->_name = name;
	return ;
}

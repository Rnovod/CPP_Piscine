/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:03:33 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/04 15:03:34 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _HP(100), _maxHP(100), _energyPoints(100),
		_maxEnergyPoints(100), _lvl(1), _meleeDamage(30),
		_rangedDamage(20), _armor(5), _name("R2-D2") {

	std::cout << "<" << this->_name  << ">: I'm ready to fight! For glory, honor and beauty!" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string const name) : _HP(100), _maxHP(100), _energyPoints(100),
		_maxEnergyPoints(100), _lvl(1), _meleeDamage(30),
		_rangedDamage(20), _armor(5) {

	this->_name = name;
	std::cout << "<" << this->_name << ">: Ugh... Who calls me? Whoaa, we should fight? Okay..." << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & obj) {

	std::cout << "<" << this->_name << ">: I'm sharing with you." << std::endl;
	*this = obj;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & obj) {

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

FragTrap::~FragTrap() {

	std::cout << "<" << this->_name << ">: GoodBye, Comrade!" << std::endl;
	return ;
}

void		FragTrap::rangedAttack(std::string const & target) {

	std::cout << "<" << this->_name << 
	"> attacks <" << target << "> at range, causing <" <<
	this->_rangedDamage << "> points of damage !" << std::endl << "<" << this->_name <<
	">: Ahahaha! You deserve it!" << std::endl;
	return ;
}

void		FragTrap::meleeAttack(std::string const & target) {

	std::cout << "<" << this->_name <<
	"> attacks <" << target << "> at melee, causing <" <<
	this->_meleeDamage << "> points of damage !" << std::endl << "<" << this->_name <<
	">: Yahooooo! I will kill you!" << std::endl;
	return ;
}

void		FragTrap::takeDamage(unsigned int amount) {

	if (amount < this->_armor) {
		std::cout << "<" << this->_name << "> armor reduce <" << amount << "> points of damage" << std::endl;
		std::cout << "<" << this->_name << ">: HAHAHA! You can't touch me!" << std::endl;
		return ;
	}
	else
		amount -= this->_armor;
	std::cout << "<" << this->_name <<
		"> take damage, causing <" <<
		amount << "> points of damage !" << std::endl;
	if (this->_HP <= amount) {
		std::cout << "<" << this->_name << "> is dead. Bad things happen..." << std::endl;
		this->_HP = 0;
	}
	else if (amount) {
		std::cout << "<" << this->_name <<
		">: Aaaaaaahhh!! Don't touch me, bastard!" << std::endl;
		this->_HP -= amount;
	}
	return ;
}

void		FragTrap::beRepaired(unsigned int amount) {

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
	std::cout << "<" << this->_name << ">: Yeeeeeee! I can fight forever!" << std::endl;
	return ;
}

typedef void (FragTrap::*ptr_fun)(std::string const &) const ;

void		FragTrap::theForce(std::string const & target) const {

	std::cout << "<" << this->_name << "> " << "use The Force on <" << target << ">" << std::endl;
	return ;
}

void		FragTrap::avadaKedavra(std::string const & target) const {

	std::cout << "<" << this->_name << "> " << "use spell Avada Kedavra on <" << target << ">" << std::endl;
	return ;
}

void		FragTrap::deathTouch(std::string const & target) const {

	std::cout << "<" << this->_name << "> " << "use Death Touch on <" << target << ">" << std::endl;
	return ;
}

void		FragTrap::kiss(std::string const & target) const {

	std::cout << "<" << this->_name << "> " << "Kiss on <" << target << ">" << std::endl;
	return ;
}

void		FragTrap::punch(std::string const & target) const {

	std::cout << "<" << this->_name << "> " << "use The Force on <" << target << ">" << std::endl;
	return ;
}

void		FragTrap::minigun(std::string const & target) const {

	std::cout << "<" << this->_name << "> " << "use minigun on <" << target << ">" << std::endl;
	return ;
}

void		FragTrap::swordJedi(std::string const & target) const {

	std::cout << "<" << this->_name << "> " << "sword of the jedi on <" << target << ">" << std::endl;
	return ;
}

void		FragTrap::bazuka(std::string const & target) const {

	std::cout << "<" << this->_name << "> " << "use bazuka on <" << target << ">" << std::endl;
	return ;
}

void		FragTrap::blaster(std::string const & target) const {

	std::cout << "<" << this->_name << "> " << "use blaster on <" << target << ">" << std::endl;
	return ;
}

void		FragTrap::kick(std::string const & target) const {

	std::cout << "<" << this->_name << "> " << "use kick on " << target << ">" << std::endl;
	return ;
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target) {


	if (this->_energyPoints < 25) {
		std::cout << "<" << this->_name << "> " << "Not enough mana" << std::endl;
		return ;	
	}
	std::string		attacks[10] = { "the Force", "death touch", "avada kedavra", "kiss",
									"punch", "kick", "minigun", "blaster", "sword of the jedi",
									 "bazuka"};

	std::map<std::string, ptr_fun> m;
	m.insert(std::make_pair("the Force", &FragTrap::theForce));
	m.insert(std::make_pair("avada kedavra", &FragTrap::avadaKedavra));
	m.insert(std::make_pair("death touch", &FragTrap::deathTouch));
	m.insert(std::make_pair("kiss", &FragTrap::kiss));
	m.insert(std::make_pair("punch", &FragTrap::punch));
	m.insert(std::make_pair("minigun", &FragTrap::minigun));
	m.insert(std::make_pair("sword of the jedi", &FragTrap::swordJedi));
	m.insert(std::make_pair("bazuka", &FragTrap::bazuka));
	m.insert(std::make_pair("blaster", &FragTrap::blaster));
	m.insert(std::make_pair("kick", &FragTrap::kick));

	ptr_fun ptr = m[attacks[rand() % 10]];
	(this->*ptr)(target);
	this->_energyPoints -= 25;

	return ;
}

std::string FragTrap::GetName(void) const {

	std::cout << "My name is " << "<" << this->_name << "> " << std::endl;
	return this->_name;
}

void		FragTrap::SetName(std::string const & name) {

	std::cout << "<" << this->_name << "> " << "Oh, new name!" << std::endl;
	this->_name = name;
	return ;
}

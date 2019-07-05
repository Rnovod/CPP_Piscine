/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:27:19 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/04 20:27:20 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap("Senshi") {

	this->_HP = 60;
	this->_maxHP = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeDamage = 60;
	this->_rangedDamage = 5;
	this->_armor = 0;
	this->_name = "Senshi";
	std::cout << "<" << this->_name  << ">: Ohhh! Kia! shpili-wili! I will cut you!" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string const name) : ClapTrap(name) {

	this->_HP = 60;
	this->_maxHP = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeDamage = 60;
	this->_rangedDamage = 5;
	this->_armor = 0;
	this->_name = name;
	std::cout << "<" << this->_name << ">: Ohhh! Kia! shpili-wili! I will cut you!" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const & obj) {

	*this = obj;
	std::cout << "<" << this->_name << ">: I'm your sensei!" << std::endl;
	return ;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & obj) {

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

NinjaTrap::~NinjaTrap() {

	std::cout << "<" << this->_name << ">: Harakiri!" << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const & target) {

	std::cout << "<" << this->_name << "> Use Shadow Death Touch! On <"  << target.GetName() << ">" << std::endl;
	std::cout << "<" << this->_name << ">: You are not true ninja!" << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & target) {

	std::cout << "<" << this->_name << "> Use Sword of the Jedi! On <"  << target.GetName() << ">" << std::endl;
	std::cout << "<" << this->_name << ">: Scav, nothing personal" << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox(FragTrap const & target) {

	std::cout << "<" << this->_name << "> Use dereference on the NULL pointer! On <"  << target.GetName() << ">" << std::endl;
	std::cout << "<" << this->_name << ">: Frag, you are not prepared!" << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox(ClapTrap const & target) {

	std::cout << "<" << this->_name << "> Use fork! On <"  << target.GetName() << ">" << std::endl;
	std::cout << "<" << this->_name << ">: Clap, i hate your clapes!" << std::endl;
	return ;
}

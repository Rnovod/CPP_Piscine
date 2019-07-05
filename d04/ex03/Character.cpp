/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:59:23 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/06 19:59:24 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(void): _name("") {

	this->_tab = new AMateria*[4];
	return ;
}

Character::Character(std::string name): _name(name) {

	this->_tab = new AMateria*[4];
	for (int i = 0; i < 4; ++i)	{
		this->_tab[i] = NULL;
	}
	return ;
}

Character::Character(Character const & obj) {

	if (this != & obj)
		*this = obj;
	return ;
}

Character::~Character() {

	delete [] this->_tab;
	return ;
}

Character &	Character::operator=(Character const & obj) {

	this->_name = obj._name;
	this->_tab = obj._tab;
	return *this;
}


std::string const & Character::getName() const
{
	return (_name);
}

void 				Character::equip(AMateria* m)
{
	int	check;

	check = 0;
	for (int i = 0; i < 4; ++i)
	{
		if (check == 0 && _tab[i] == NULL)
		{
			_tab[i] = m;
			check++;
		}
	}
	if (check == 0)
		std::cout << "inventory full." << std::endl;
}

void 				Character::unequip(int idx)
{
	if (_tab[idx] == NULL)
		std::cout << "inventory empty." << std::endl;
	else
		_tab[idx] = NULL;
}

void 				Character::use(int idx, ICharacter& target)
{
	if (_tab[idx] == NULL || idx > 3 || idx < 0)
		std::cout << "no materia in this slot." << std::endl;
	else
		{
			_tab[idx]->use(target);
			_tab[idx] = NULL;
		}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:28:33 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 16:28:39 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {

	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

SuperMutant::SuperMutant(SuperMutant const & obj) : Enemy(obj) {

	*this = obj;
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

SuperMutant::~SuperMutant(void) {

	std::cout << "Aaargh ..." << std::endl;
	return ;
}

SuperMutant & SuperMutant::operator=(SuperMutant const & obj)  {

	if (this != &obj) {
		Enemy::operator=(obj);
	}
	return *this;
}

void			SuperMutant::takeDamage(int amount) {

	if (amount < 3)
		return ;
	else if (amount > this->getHP() + 3) {
		this->setHP(0);
		return ;
	}
	this->setHP(this->getHP() - amount + 3);
	return ;
}

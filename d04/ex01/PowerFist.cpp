/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:28:02 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 16:28:02 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) {

	return ;
}

PowerFist::PowerFist(PowerFist const & obj) : AWeapon(obj) {

	*this = obj;
	return ;
}

PowerFist::~PowerFist(void) {

	return ;
}

PowerFist & PowerFist::operator=(PowerFist const & obj) {

	if (this != &obj) {
		AWeapon::operator=(obj);
	}
	return *this;
}

void	PowerFist::attack(void) const {

	std::cout << "* pschhh... SBAM! *" << std::endl;
	return;
}

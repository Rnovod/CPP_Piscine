/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:27:43 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 16:27:43 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {

	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & obj) : AWeapon(obj) {

	*this = obj;
	return ;
}

PlasmaRifle::~PlasmaRifle(void) {

	return ;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & obj) {

	if (this != &obj)
		AWeapon::operator=(obj);
	return *this;
}

void	PlasmaRifle::attack(void) const {

	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return;
}

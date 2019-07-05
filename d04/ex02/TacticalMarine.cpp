/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 20:58:35 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 20:58:36 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {

	std::cout << "Tactical Marine ready for battle" << std::endl;
	return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const & obj) {

	*this = obj;
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return ;
}

TacticalMarine::~TacticalMarine(void) {

	std::cout << "Aaargh ..." << std::endl;
	return ;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & obj) {

	if (this != &obj) {
		(void)obj;
	}
	return *this;
}

ISpaceMarine	*TacticalMarine::clone() const {

	ISpaceMarine	*clone = new TacticalMarine(*this);
	return clone ;
}

void			TacticalMarine::battleCry() const {

	std::cout << "For the holy PLOT !" << std::endl;
	return ;
}

void			TacticalMarine::rangedAttack() const {

	std::cout << "* attacks with bolter *" << std::endl;
	return ;
}

void			TacticalMarine::meleeAttack() const {

	std::cout << "* attacks with chainsword *" << std::endl;
	return ;
}

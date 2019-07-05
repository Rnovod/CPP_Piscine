/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:28:47 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 16:28:48 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") {

	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(RadScorpion const  & obj) : Enemy(obj) {

	*this = obj;
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::~RadScorpion(void) {

	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

RadScorpion &	RadScorpion::operator=(RadScorpion const & obj) {

	if (this != &obj) {
		Enemy::operator=(obj);
	}
	return *this;
}

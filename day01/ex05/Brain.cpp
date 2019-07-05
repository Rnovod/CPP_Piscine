/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 20:44:27 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/02 20:44:28 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	setBrainIq(50);
	return ;
}

Brain::~Brain(void) {
	return ;
}

std::string		Brain::identify(void) const {
	std::stringstream	buff;
	std::string			str;

	buff << this;
	str = buff.str();
	for (int i = 2; str[i]; ++i) {
		str[i] = std::toupper(str[i]);
	}
	return str;
}

void 		Brain::setBrainIq(int iq) {
	this->_iq = iq;
	return ;
}

int 		Brain::getBrainIq(void) const {
	return this->_iq;
}

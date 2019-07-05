/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 20:44:38 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/02 20:44:38 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void) {
	return ;
}

Human::~Human(void) {
	return ;
}

Brain const &	Human::getBrain(void) {
	return this->_own_brain;
}

std::string		Human::identify(void) {
	return this->_own_brain.identify();
}

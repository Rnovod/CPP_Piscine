/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 19:01:58 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/09 19:01:59 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy Request Form", 72, 45) {

	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : Form("Robotomy Request Form", 72, 45), _target(target) {

	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & obj) : Form("Robotomy Request Form", 72, 45) {

	*this = obj;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {

	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & obj) {

	if (this != &obj) {
		this->_target = obj._target;
	}
	return *this;
}

void	RobotomyRequestForm::executed(void) {

	if (rand() % 2)
		std::cout << "Rieeeeeezzzzzzzzzz... " << this->_target << " has been robotomized succefully!" << std::endl;
	else
		std::cout << "*Crash* ... Robotomy - failure!" << std::endl;
	return ;
}

std::string	const &	RobotomyRequestForm::getTarget(void) const {

	return this->_target;
}

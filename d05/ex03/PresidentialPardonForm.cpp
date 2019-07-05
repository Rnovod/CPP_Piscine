/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 19:02:13 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/09 19:02:13 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Presidential Pardon Form", 25, 5) {

	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : Form("Presidential Pardon Form", 25, 5), _target(target) {

	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & obj) : Form("Presidential Pardon Form", 25, 5) {

	*this = obj;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {

	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & obj) {

	if (this != &obj) {
		this->_target = obj._target;
	}
	return *this;
}

void	PresidentialPardonForm::executed(void) {

	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	return ;
}

std::string	const &	PresidentialPardonForm::getTarget(void) const {

	return this->_target;
}

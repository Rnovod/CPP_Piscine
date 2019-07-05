/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 20:51:32 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/09 20:51:34 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

Intern::Intern(void) {

	return ;
}

Intern::Intern(Intern const & obj) {

	*this = obj;
	return ;
}

Intern & Intern::operator=(Intern const & obj) {

	if (this != &obj) {
		(void)obj;
	}
	return *this;
}

Intern::~Intern(void) {

	return ;
}

Form * Intern::makeForm(std::string const & form_name, std::string const & target) {

	Form	*form;

	if (form_name == "shrubbery creation") {
		form = new ShrubberyCreationForm(target);
	}
	else if (form_name == "robotomy request") {
		form = new RobotomyRequestForm(target);
	}
	else if (form_name == "presidential pardon") {
		form = new PresidentialPardonForm(target);
	}
	else {
		std::cout << "Unknown form with name " << form_name << std::endl;
		return NULL;
	}
	std::cout << "Intern creates " << *form << " on " << target;
	return form;
}

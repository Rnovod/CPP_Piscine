/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 15:19:04 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/09 15:19:05 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("Unknown"), _sign(false), _signGrade(75), _execGrade(75) {

	return ;
}

Form::Form(std::string const & name, int signGrade, int execGrade): _name(name), _signGrade(signGrade), _execGrade(execGrade) {

	if (_signGrade < 1 || _execGrade < 1) {
		throw GradeTooHighException();
	}
	if (_signGrade > 150 || _execGrade > 150) {
		throw GradeTooLowException();
	}
}

Form::Form(Form const & obj) : _name(obj._name), _signGrade(obj._signGrade), _execGrade(obj._execGrade) {

	*this = obj;
	return ;
}

Form::~Form(void) {

	return ;
}

Form &	Form::operator=(Form const & obj) {

	if (this != &obj) {
		_sign = obj._sign;
	}
	return *this;
}

std::string	Form::getName(void) const {

	return _name;
}

bool		Form::getSign(void) const {

	return _sign;
}

int			Form::getSignGrade(void) const {

	return _signGrade;
}

int			Form::getExecGrade(void) const {

	return _execGrade;
}

void		Form::beSigned(Bureaucrat const & person) {

	if (person.getGrade() > _signGrade)
	{
		throw Form::GradeTooLowException();
	}
	else if (!_sign)
		_sign = true;
}

std::ostream &	operator<<(std::ostream & o, Form const & form) {

	o << form.getName() << ", is ";
	if (!form.getSign()) {
		o << "not ";
	}
	o << "signed, min sign grade: " << form.getSignGrade()	<< ", min execution grade: " << form.getExecGrade();

	return o;
}


Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & obj) {
	*this = obj;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {

	return ;
}

Form::GradeTooHighException &	Form::GradeTooHighException::operator=(GradeTooHighException const & obj) {

	if (this != &obj) {
		std::exception::operator=(obj);
	}
	return *this;
}

const char	* Form::GradeTooHighException::what() const throw() {

	return "grade is too high";
}

Form::GradeTooLowException::GradeTooLowException() {

	return ;
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & obj) {

	*this = obj;
	return ;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {

	return ;
}

Form::GradeTooLowException &	Form::GradeTooLowException::operator=(GradeTooLowException const & obj) {

	if (this != & obj) {
		std::exception::operator=(obj);
	}
	return *this;
}

const char	* Form::GradeTooLowException::what() const throw() {

	return "grade is too low.";
}

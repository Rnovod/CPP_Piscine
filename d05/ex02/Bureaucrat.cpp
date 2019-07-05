/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:27:58 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/08 18:27:59 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {

	return ;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name){

	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & obj) {

	*this = obj;
	return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & obj) {

	if (this != &obj) {
		this->_grade = obj.getGrade();
	}
	return *this;
}

Bureaucrat::~Bureaucrat(void) {

	return ;
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw() {

	return "grade is to high.";
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw() {

	return "grade is too low.";
}

std::string		Bureaucrat::getName(void) const {

	return _name;
}

int				Bureaucrat::getGrade(void) const {

	return _grade;
}

void			Bureaucrat::incrementGrade(void) {

	if (_grade - 1 < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	else
		_grade--;
	return ;
}

void			Bureaucrat::decrementGrade(void) {

	if (_grade + 1 > 150) {
		throw Bureaucrat::GradeTooLowException();
	} else {
		_grade++;
	}
	return ;
}

std::ostream &	operator<<(std::ostream &o, Bureaucrat const & obj) {

	o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return o;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) {

	return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & obj) {

	*this = obj;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {

	return ;
}

Bureaucrat::GradeTooHighException &	Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & obj) {

	if (this != &obj) {
		(void)obj;
	}
	return *this;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) {

	return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & obj) {

	*this = obj;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {

	return ;
}

Bureaucrat::GradeTooLowException &	Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const & obj) {

	if (this != &obj) {
		(void)obj;
	}
	return *this;
}

void		Bureaucrat::signForm(Form & form) const {

	try
	{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
	return ;
}

void	Bureaucrat::executeForm(Form & form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executes " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " cannot execute " << form.getName()
		<< " because " << e.what() << std::endl;
	}
}

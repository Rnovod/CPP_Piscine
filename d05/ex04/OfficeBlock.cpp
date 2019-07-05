/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 21:03:21 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/09 21:03:22 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "OfficeBlock.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

OfficeBlock::OfficeBlock(void) {

	return ;
}

OfficeBlock::OfficeBlock(Intern & intern, Bureaucrat & signer, Bureaucrat & executor) {

	this->_intern = &intern;
	this->_signer = &signer;
	this->_executor = &executor;
	return ;
}

OfficeBlock::~OfficeBlock(void) {

	return ;
}

void		OfficeBlock::doBureaucracy(std::string const & name, std::string const & target) {

	Form					*form;

	if (!this->_intern)
		throw NoInternException();
	if (!this->_signer)
		throw NoSignException();
	if (!this->_executor)
		throw NoExecutorException();
	
	try
	{
		form = this->_intern->makeForm(name, target);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << " " << name << std::endl;
		return ;
	}

	try
	{
		this->_signer->signForm(*form);
	}
	catch (std::exception & e)
	{
		delete form;
		throw SignerGradeTooLowException();
	}

	try
	{
		this->_executor->executeForm(*form);
	}
	catch (std::exception & e)
	{
		delete form;
		throw ExecutorGradeTooLowException();
	}
	delete form;
}

void	OfficeBlock::setIntern(Intern & intern) {

	this->_intern = &intern;
	return ;
}

void	OfficeBlock::setSigner(Bureaucrat & signer) {

	this->_signer = &signer;
	return ;
}

void	OfficeBlock::setExecutor(Bureaucrat & executor) {

	this->_executor = &executor;
	return ;
}

OfficeBlock::NoInternException::NoInternException(void) {

	return ;
}
OfficeBlock::NoInternException::~NoInternException(void) throw() {

	return ;
}
OfficeBlock::NoInternException::NoInternException(NoInternException const & obj) {

	*this = obj;
	return ;
}

OfficeBlock::NoInternException &	OfficeBlock::NoInternException::operator=(OfficeBlock::NoInternException const & obj)
{
	if (this != &obj) {
		std::exception::operator=(obj);
	}
	return *this;
}

char const	*	OfficeBlock::NoInternException::what(void) const throw()
{
	return "No Intern";
}

OfficeBlock::NoSignException::NoSignException(void) {

	return ;
}

OfficeBlock::NoSignException::~NoSignException(void) throw() {

	return ;
}

OfficeBlock::NoSignException::NoSignException(NoSignException const & obj) {

	*this = obj;
	return ;
}

OfficeBlock::NoSignException &	OfficeBlock::NoSignException::operator=(OfficeBlock::NoSignException const & obj)
{
	if (this != &obj) {
		std::exception::operator=(obj);
	}
	return *this;
}

char const					*OfficeBlock::NoSignException::what(void) const throw()
{
	return "No Signer";
}


OfficeBlock::NoExecutorException::NoExecutorException(void) {

	return ;
}

OfficeBlock::NoExecutorException::~NoExecutorException(void) throw() {

	return ;
}

OfficeBlock::NoExecutorException::NoExecutorException(NoExecutorException const & obj) {

	*this = obj;
	return ;
}

OfficeBlock::NoExecutorException &	OfficeBlock::NoExecutorException::operator=(OfficeBlock::NoExecutorException const & obj) {

	if (this != &obj) {
		std::exception::operator=(obj);
	}
	return *this;
}

char const	*	OfficeBlock::NoExecutorException::what(void) const throw() {

	return "No Executor";
}


OfficeBlock::SignerGradeTooLowException::SignerGradeTooLowException(void) {

	return ;
}

OfficeBlock::SignerGradeTooLowException::~SignerGradeTooLowException(void) throw() {

	return ;
}

OfficeBlock::SignerGradeTooLowException::SignerGradeTooLowException(SignerGradeTooLowException const & obj) {

	*this = obj;
	return ;
}

OfficeBlock::SignerGradeTooLowException	&	OfficeBlock::SignerGradeTooLowException::operator=(OfficeBlock::SignerGradeTooLowException const & obj)
{
	if (this != &obj) {
		std::exception::operator=(obj);
	}
	return *this;
}

char const					*OfficeBlock::SignerGradeTooLowException::what(void) const throw() {

	return "Signer grade is to low";
}


OfficeBlock::ExecutorGradeTooLowException::ExecutorGradeTooLowException(void) {

	return ;
}

OfficeBlock::ExecutorGradeTooLowException::~ExecutorGradeTooLowException(void) throw() {

	return ;
}

OfficeBlock::ExecutorGradeTooLowException::ExecutorGradeTooLowException(ExecutorGradeTooLowException const & obj) {

	*this = obj;
	return ;
}

OfficeBlock::ExecutorGradeTooLowException &	OfficeBlock::ExecutorGradeTooLowException::operator=(OfficeBlock::ExecutorGradeTooLowException const & obj) {

	if (this != &obj) {
		std::exception::operator=(obj);
	}
	return *this;
}

char const *	OfficeBlock::ExecutorGradeTooLowException::what(void) const throw() {

	return "Executor grade is too low";
}

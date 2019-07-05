/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 18:59:46 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/01 18:59:47 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <ctime>

Account::Account(int initial_deposit) {
	this->_displayTimestamp();
	std::cout << "index:" << this->_nbAccounts << ";amount:"
	<< initial_deposit << ";created" << std::endl;
	this->_totalAmount += initial_deposit;
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

Account::~Account(void) {
	this->_displayTimestamp();
	std::cout << "index:" << --this->_nbAccounts << ";amount:" << this->_amount
	<< ";closed" << std::endl;
}

int	Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:"
	<< Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits
	<< ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount
	<< ";deposit:" << deposit;
	Account::_totalAmount -= this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
	Account::_totalNbDeposits += this->_nbDeposits;
	Account::_totalAmount += this->_amount;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount
	<< ";withdrawal:";
	if (withdrawal > this->_amount) {
		std::cout << "refused" << std::endl;
		return false;
	}
	std::cout << withdrawal;
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	std::cout << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	Account::_totalNbWithdrawals += this->_nbWithdrawals;
	Account::_totalAmount -= withdrawal;
	return true;
}

int		Account::checkAmount( void ) const {
	this->_call_checkAmount++;
	return this->_amount;
}

void	Account::displayStatus( void ) const {
	this->_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
	<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}


void	Account::_displayTimestamp( void ) {

	time_t		rawtime;
	struct tm	*timeinfo;
	char		buff[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	strftime(buff, 80, "[%G%m%d_%H%M%S] ", timeinfo);
	std::cout << buff;
}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

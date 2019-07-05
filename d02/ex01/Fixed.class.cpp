/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 19:11:16 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/03 19:11:17 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( void ) : _raw(0) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const n )  {

	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(n << this->_bits);
	return ;
}

Fixed::Fixed( float const n ) {

	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(n * (1 << this->_bits)));
	return ;
}

Fixed::Fixed( Fixed const & obj ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
	return ;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits( void ) const {
	return this->_raw;
}

void	Fixed::setRawBits( int const raw ) {

	this->_raw = raw;
}

float	Fixed::toFloat( void ) const {
	return (float(this->getRawBits()) / (1 << this->_bits));
}

int		Fixed::toInt( void ) const {
	return (this->getRawBits() >> this->_bits);
}

Fixed &	Fixed::operator=( Fixed const & obj ) {

	std::cout << "Assignation operator called" << std::endl;
	if (this != &obj)
		this->_raw = obj.getRawBits();
	return *this;
}

std::ostream & operator<<( std::ostream & o, Fixed const & obj) {

	o << obj.toFloat();

	return o;
}

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

	return ;
}

Fixed::Fixed( int const n )  {

	this->setRawBits(n << this->_bits);
	return ;
}

Fixed::Fixed( float const n ) {

	this->setRawBits(roundf(n * (1 << this->_bits)));
	return ;
}

Fixed::Fixed( Fixed const & obj ) {

	*this = obj;
	return ;
}

Fixed::~Fixed( void ) {

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

	if (this != &obj)
		this->_raw = obj.getRawBits();
	return *this;
}

Fixed	Fixed::operator+( Fixed const & obj ) {

	Fixed	ret;

	ret.setRawBits(this->_raw + obj.getRawBits());
	return ret;
}

Fixed	Fixed::operator-( Fixed const & obj ) {

	Fixed	ret;

	ret.setRawBits(this->_raw - obj.getRawBits());
	return ret;
}

Fixed	Fixed::operator*( Fixed const & obj ) {

	Fixed	ret;

	ret.setRawBits(this->_raw * obj.getRawBits() >> this->_bits);
	return ret;
}

Fixed	Fixed::operator/( Fixed const & obj ) {

	Fixed	ret;

	ret.setRawBits((this->_raw << this->_bits) / obj.getRawBits());
	return ret;
}

bool	Fixed::operator>( Fixed const & obj ) {

	return this->_raw > obj.getRawBits();
}

bool	Fixed::operator<( Fixed const & obj ) {

	return this->_raw < obj.getRawBits();
}

bool	Fixed::operator>=( Fixed const & obj ) {

	return this->_raw >= obj.getRawBits();
}

bool	Fixed::operator<=( Fixed const & obj ) {

	return this->_raw <= obj.getRawBits();
}

bool	Fixed::operator==( Fixed const & obj ) {

	return this->_raw == obj.getRawBits();
}

bool	Fixed::operator!=( Fixed const & obj ) {

	return this->_raw != obj.getRawBits();
}

Fixed &	Fixed::operator++(void) {
	++this->_raw;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);

	++*this;
	return tmp;
}

Fixed &	Fixed::operator--(void) {
	--this->_raw;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);

	--*this;
	return tmp;
}

Fixed &	Fixed::min(Fixed & value1, Fixed & value2) {

	if (value1.getRawBits() > value2.getRawBits())
		return value2;
	else
		return value1;
}

Fixed &	Fixed::max(Fixed & value1, Fixed & value2) {

	if (value1.getRawBits() > value2.getRawBits())
		return value1;
	else
		return value2;
}

Fixed const & Fixed::min(Fixed const & value1, Fixed const & value2) {

	if (value1.getRawBits() > value2.getRawBits())
		return value2;
	else
		return value1;
}

Fixed const & Fixed::max(Fixed const & value1, Fixed const & value2) {

	if (value1.getRawBits() > value2.getRawBits())
		return value1;
	else
		return value2;
}

std::ostream & operator<<( std::ostream & o, Fixed const & obj) {

	o << obj.toFloat();

	return o;
}

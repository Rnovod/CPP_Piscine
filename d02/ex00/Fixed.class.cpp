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

Fixed::Fixed(void) : _raw(0) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & obj) {

	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
	return ;
}

Fixed &	Fixed::operator=(Fixed const & obj) {

	std::cout << "Assignation operator called" << std::endl;
	if (this != &obj)
		this->_raw = obj.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_raw;
}

void	Fixed::setRawBits( int const raw ) {

	this->_raw = raw;
}

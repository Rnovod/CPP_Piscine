/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 10:53:12 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/01 10:53:13 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ) {

	std::cout << "Called constructor" << std::endl;

	this->publicFoo = 0;
	std::cout << "publicFoo : " << this->publicFoo << std::endl;

	this->_privateFoo = 0;
	std::cout << "_privateFoo : " << this->_privateFoo << std::endl;	

	this->publicBar();
	this->_privateBar();

	return ;
}

Sample::~Sample( void ) {

	std::cout << "Called destructor" << std::endl;
	return ;
}

void	Sample::publicBar( void ) const {

	std::cout << "publicBar called" << std::endl;
	return ;
}

void	Sample::_privateBar( void ) const {

	std::cout << "privateBar called" << std::endl;
	return ;
}

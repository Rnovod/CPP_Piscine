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

	this->setFoo( 0 );
	std::cout << "this->getFoo : " << this->getFoo() << std::endl;

	return ;
}

Sample::~Sample( void ) {

	std::cout << "Called destructor" << std::endl;
	return ;
}

void	Sample::setFoo( int v ) {

	if (v >= 0)
		this->_foo = v;

	return ;
}

int		Sample::getFoo( void ) const {

	return this->_foo;
}

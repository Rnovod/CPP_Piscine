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

Sample::Sample( int v ) : _foo(v) {

	std::cout << "Called constructor" << std::endl;
	return ;
}

Sample::~Sample( void ) {

	std::cout << "Called destructor" << std::endl;
	return ;
}

int		Sample::getFoo( void ) const {

	return this->_foo;
}

int		Sample::compare( Sample * other ) const {

	if ( this->_foo< other->getFoo() )
		return -1;
	else if ( this->_foo > other->getFoo())
		return 1;
	return 0;
}

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

Sample::Sample( void ) : foo( 0 ){

	std::cout << "Called constructor" << std::endl;

	return ;
}

Sample::~Sample( void ) {

	std::cout << "Called destructor" << std::endl;

	return ;
}

void		Sample::bar( void ) const {

	std::cout << "Bar called" << std::endl;

	return ;
}


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
	Sample::_nbInst += 1;

	return ;
}

Sample::~Sample( void ) {

	std::cout << "Called destructor" << std::endl;
	Sample::_nbInst -= 1;

	return ;
}

int		Sample::getNbInst( void ) {

	return Sample::_nbInst;
}

int		Sample::_nbInst = 0;

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 10:35:39 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/01 10:35:43 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

void	f0( void ) {

	Sample instance;

	std::cout << "Number : " << Sample::getNbInst() << std::endl;
}

void	f1( void ) {

	Sample instance;

	std::cout << "Number : " << Sample::getNbInst() << std::endl;
	f0();
}

int		main( void ) {
	
	std::cout << "Number : " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Number : " << Sample::getNbInst() << std::endl;
	return 0;

}

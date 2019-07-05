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

int		main( void ) {

	Sample instance;

	instance.publicFoo = 42;
	std::cout << "instance.publicFoo : " << instance.publicFoo << std::endl;
	// instance._privateFoo = 42;
	// std::cout << "instance._privateFoo : " << instance._privateFoo << std::endl;


	instance.publicBar();
	// instance._privateBar();

	return 0;
}

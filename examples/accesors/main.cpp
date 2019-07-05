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

	instance.setFoo ( 42 );
	std::cout << "_foo : " << instance.getFoo() << std::endl;
	instance.setFoo ( -42 );
	std::cout << "_foo : " << instance.getFoo() << std::endl;

	return 0;
}

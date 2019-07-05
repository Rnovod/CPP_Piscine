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

	Sample * instancep = &instance;

	int		Sample::*p = NULL;
	void	(Sample::*f)( void ) const ;
	
	p = &Sample::foo;
	std::cout << "Value of member foo : " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo : " << instance.foo << std::endl;
	instancep->*p = 42; 
	std::cout << "Value of member foo : " << instance.foo << std::endl;

	f = &Sample::bar;

	(instance.*f)();
	(instancep->*f)();
	return 0;

}

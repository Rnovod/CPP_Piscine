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
	
	Sample instance1( 42 );
	Sample instance2( 42 );

	if ( &instance1 == &instance1 )
		std::cout << "Physically identical" << std::endl;
	else
		std::cout << "Physically not identical" << std::endl;

	if ( &instance1 == &instance2 )
		std::cout << "Physically identical" << std::endl;
	else
		std::cout << "Physically not identical" << std::endl;

	if ( instance1.compare(&instance1) == 0 )
		std::cout << "Structurally identical" << std::endl;
	else
		std::cout << "Structurally not identical" << std::endl;

	if ( instance1.compare(&instance2) == 0 )
		std::cout << "Structurally identical" << std::endl;
	else
		std::cout << "Structurally not identical" << std::endl;
	return 0;

}

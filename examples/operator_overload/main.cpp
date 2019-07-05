/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:38:58 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/03 18:38:59 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Integer.class.hpp"

int		main(void) {

	Integer		x( 30 );
	Integer		y( 10 );
	Integer		z( 0  );


	std::cout << "Value of x : " << x << std::endl;
	std::cout << "Value of y : " << x << std::endl;
	y = Integer( 12 );
	std::cout << "Value of y : " << x << std::endl;

	std::cout << "Value of z : " << x << std::endl;
	z = x + y;
	std::cout << "Value of z : " << x << std::endl;

	return 0;
}

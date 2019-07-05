/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 19:16:57 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/03 19:16:58 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"

static inline void	check_comparison(void) {

	Fixed	a(10);
	Fixed	b(5);

	std::cout << std::endl;
	std::cout << "(a{" << a << "} <  b{" << b << "}) - " << (a < b) << std::endl;
	std::cout << "(a{" << a << "} <= b{" << b << "}) - " << (a <= b) << std::endl;
	std::cout << "(a{" << a << "} >  b{" << b << "}) - " << (a > b) << std::endl;
	std::cout << "(a{" << a << "} >= b{" << b << "}) - " << (a >= b) << std::endl;
	std::cout << "(a{" << a << "} == b{" << b << "}) - " << (a == b) << std::endl;
	std::cout << "(a{" << a << "} != b{" << b << "}) - " << (a != b) << std::endl;
	std::cout << std::endl;

	return ;
}

static inline void	check_arithmetic(void) {

	Fixed	a(3.14f);
	Fixed	b(4);

	std::cout << std::endl;
	std::cout << "(a{" << a << "} + b{" << b << "}) = " << (a + b) << std::endl;
	std::cout << "(a{" << a << "} - b{" << b << "}) = " << (a - b) << std::endl;
	std::cout << "(a{" << a << "} * b{" << b << "}) = " << (a * b) << std::endl;
	std::cout << "(a{" << a << "} / b{" << b << "}) = " << (a / b) << std::endl;

	Fixed	c;

	std::cout << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "c = Fixed(1234.4321)" << std::endl;
	c = Fixed(1234.4321f);
	std::cout << "c = " << c << std::endl;

	Fixed	i;
	std::cout << std::endl;
	std::cout << "Increment: i = " << i << std::endl;
	std::cout << "Prefix: " << ++i << std::endl;
	std::cout << "Postfix: " << i++ << std::endl;
	std::cout << "Now: " << i << std::endl;

	std::cout << std::endl;
	std::cout << "Decrement: i = " << i << std::endl;
	std::cout << "Prefix: " << --i << std::endl;
	std::cout << "Postfix: " << i-- << std::endl;
	std::cout << "Now: " << i << std::endl;
	return ;
}

static inline void	check_min_max(void) {

	Fixed	a(5);
	Fixed	b(15);

	std::cout << std::endl;
	std::cout << "a = " << a << " and b = " << b << std::endl;
	std::cout << "min is " << Fixed::min( a, b ) << std::endl;
	std::cout << "max is " << Fixed::max( a, b ) << std::endl;

	Fixed const	c(20);
	Fixed const	v(10);
	std::cout << std::endl;
	std::cout << "c = " << c << " and v = " << v << std::endl;
	std::cout << "min is " << Fixed::min( c, v ) << std::endl;
	std::cout << "max is " << Fixed::max( c, v ) << std::endl;
	std::cout << std::endl;
}

int					main(void) {

	check_comparison();
	check_arithmetic();
	check_min_max();

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 13:50:51 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/10 13:50:52 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include "Convert.hpp"

int		main(const int ac, const char *av[]) {

	if (ac != 2) {
		std::cout << "usage: ./convert <literal [char/int/float/double]value>" << std::endl;
		return 1;
	}
	Convert	conv(av[1]);

	std::cout << "char: ";
	try
	{
		char c = conv.convertToChar();
		std::cout << '\'' << c << '\'';
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;

	std::cout << "int: ";
	try
	{
		int	i = conv.convertToInt();
		std::cout << i;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;

	std::cout << "float: ";
	try
	{
		float	f = conv.convertToFloat();
		std::cout << f << 'f';
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;

	std::cout << "double: ";
	try
	{
		double	d = conv.convertToDouble();
		std::cout << d;
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;
	return 0;
}


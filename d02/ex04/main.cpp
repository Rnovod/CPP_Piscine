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
#include <sstream>
#include "Fixed.class.hpp"

int					main(const int ac, const char **av) {

	if (ac != 2) {
		std::cout << "usage: eval_expr <expression>" << std::endl;
		return -1;
	}
	std::string		expression(av[1]);

	std::cout << expression << std::endl;
	return 0;
}
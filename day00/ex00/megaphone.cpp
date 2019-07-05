/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 14:43:33 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/01 14:43:34 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char **av) {

	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}else{
		for (++av; *av; ++av) {
			for (uint i = 0; (*av)[i]; ++i) {
				(*av)[i] = std::toupper((*av)[i]);
			}
			std::cout << *av;
		}
	}
	std::cout << std::endl;
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 12:27:56 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/03 12:27:57 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
#include "ClassReplace.hpp"

int		main(const int ac, const char **av) {

	if (ac != 4) {
		std::cout << "usage: replace <filename> <string1> <string2>" << std::endl;
		return -1;
	}

	Replace		rapl;

	if (rapl.SetOriginFile(av[1]) < 0) {
		return -1;
	}
	if (rapl.SetStringFind(av[2]) < 0) {
		std::cout << "Empty string1" << std::endl;
		return -1;
	}
	if (rapl.SetStringReplace(av[3]) < 0) {
		std::cout << "Empty string2" << std::endl;
		return -1;
	}
	if (rapl.SetReplaceFile() < 0) {
		return -1;
	}
	rapl.ReplaceString();
	return 0;
}

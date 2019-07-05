/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 15:24:30 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/01 15:24:31 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		main(void) {

	std::string	line;
	phonebook	phonebook;

	while (42) {
		std::cout << "put command: ";
		if (std::getline(std::cin, line) == 0) {
			std::cout << "Not today, Bastard!" << std::endl;
			return -1;
		}
		if (line == "ADD") {
			phonebook.add_user();
		}
		else if (line == "SEARCH") {
			phonebook.search_user();
		}
		else if (line == "EXIT") {
			return 0;
		}
		else {
			std::cout << "unknown command \"" << line << "\"" << std::endl;
		}
	}
	return 0;
}

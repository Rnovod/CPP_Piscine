/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 15:53:21 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/01 15:53:22 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook(void) {
	this->_number_contact = 0;
	return ;
}

phonebook::~phonebook(void) {
	return ;
}

inline const char *phonebook::_put_info(int i) {

	switch (i)
	{
		case first_name:		return "first_name: ";
		case last_name:			return "last_name: ";
		case nickname:			return "nickname: ";
		case login:				return "login: ";
		case postal_address:	return "postal_address: ";
		case email_address:		return "email_address: ";
		case phone_number:		return "phone_number: ";
		case birthday_date:		return "birthday_date: ";
		case favorite_meal:		return "favorite_meal: ";
		case underwear_color:	return "underwear_color: ";
		case darkest_secret:	return "darkest_secret: ";
		default:				return "[Unknown info]: ";
	}
}

void	phonebook::add_user(void) {

	if (this->_number_contact == 8) {
		std::cout << "contact list is full" << std::endl;
		return ;
	}
	for (size_t i = 0; i < 11; ++i) {
		std::cout << phonebook::_put_info(i) ;
		if (std::getline(std::cin, this->_contacts[this->_number_contact].data[i]) == 0) {
			std::cout << "Not today, Bastard!" << std::endl;
			exit(1);
		}
	}
	this->_number_contact++;
}

void	phonebook::_get_contact(std::string line_index) {

	if (line_index.length() == 1) {
		int index = line_index[0] - '0';

		if (index < 0 || index >= int(this->_number_contact)) {
			std::cout << "index must be exist" << std::endl;
			return ;
		}
		for (size_t i = 0; i < 11; ++i) {
			std::cout << phonebook::_put_info(i) ;
			std::cout << this->_contacts[index].data[i] << std::endl;
		}
	}
	else {
		std::cout << "Bad index line" << std::endl;
	}
}

void	phonebook::search_user(void) {

	std::cout << ".----------.----------.----------.----------." << std::endl;
	std::cout << "|   index  |first name|last  name| nickname |" << std::endl;
	std::cout << ".----------.----------.----------.----------." << std::endl;

	for (size_t num_cont = 0; num_cont < this->_number_contact; ++num_cont) {
		
		std::cout << "|     " << num_cont << "    |";
		for (size_t j = 0; j < 3; ++j) {
			size_t len = this->_contacts[num_cont].data[j].length();
			if (len > 10) {
				std::cout << this->_contacts[num_cont].data[j].substr(0, 9);
				std::cout << ".";
			}
			else {
				size_t space = (10 - len) / 2;
				for (;space > 0; --space)
					std::cout << " ";
				std::cout << this->_contacts[num_cont].data[j];
				space = (10 - len) / 2 + len;
				for (;space < 10; ++space)
					std::cout << " ";
			}
			std::cout << "|";
		}
		std::cout << std::endl << ".----------.----------.----------.----------." << std::endl;
	}
	std::string line_index;
	std::cout << "put index : ";
	if (std::getline(std::cin, line_index) == 0) {
		std::cout << "Not today, Bastard!" << std::endl;
		exit(1);
	}
	this->_get_contact(line_index);
}

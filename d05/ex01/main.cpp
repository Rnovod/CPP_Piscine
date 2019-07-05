/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:28:06 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/08 18:28:11 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void) {

	Bureaucrat	bob("Bob", 50);
	Bureaucrat	robert("Robert", 10);

	Form		form("Soul contract", 40, 20);

	std::cout << form << std::endl;

	std::cout << std::endl;
	std::cout << "Bob try to sign." << std::endl;
	try
	{
		
		std::cout << bob << std::endl;
		bob.signForm(form);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Robert try to sign." << std::endl;
	try
	{
		std::cout << robert << std::endl;
		robert.signForm(form);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}

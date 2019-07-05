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

int		main(void) {

	std::cout << "Test create Bureaucrat with grade 0." << std::endl;
	try
	{
		Bureaucrat	Bob("Bob", 0);
		std::cout << Bob << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Test create Bureaucrat with grade 151." << std::endl;
	try
	{
		Bureaucrat	Harry("Harry", 151);
		std::cout << Harry << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	Bureaucrat	John("John", 5);
	std::cout << std::endl << John << std::endl;

	std::cout << "Test increment grade from 5 to 0." << std::endl;
	try
	{
		John.incrementGrade();
		std::cout << John << std::endl;
		John.incrementGrade();
		std::cout << John << std::endl;
		John.incrementGrade();
		std::cout << John << std::endl;
		John.incrementGrade();
		std::cout << John << std::endl;
		John.incrementGrade();
		std::cout << John << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	Bureaucrat	Lannister("Lannister", 145);
	std::cout << std::endl << Lannister << std::endl;

	std::cout << "Test decrement grade from 145 to 151." << std::endl;
	try
	{
		Lannister.decrementGrade();
		std::cout << Lannister << std::endl;
		Lannister.decrementGrade();
		std::cout << Lannister << std::endl;
		Lannister.decrementGrade();
		std::cout << Lannister << std::endl;
		Lannister.decrementGrade();
		std::cout << Lannister << std::endl;
		Lannister.decrementGrade();
		std::cout << Lannister << std::endl;
		Lannister.decrementGrade();
		std::cout << Lannister << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}

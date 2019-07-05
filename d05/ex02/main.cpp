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
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int		main(void) {

	srand(time(NULL));

	Bureaucrat	trump("Trump", 5);
	Bureaucrat	robocop("Robocop", 40);
	Bureaucrat	alibaba("Alibaba", 80);
	Bureaucrat	dobi("Dobi", 150);

	PresidentialPardonForm		form1("President");
	RobotomyRequestForm			form2("robot");
	ShrubberyCreationForm		form3("tree");

	std::cout << dobi << std::endl;
	try
	{
		std::cout << form3 << std::endl;
		dobi.signForm(form3);
		dobi.executeForm(form3);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << alibaba << std::endl;
	try
	{
		std::cout << form3 << std::endl;
		alibaba.signForm(form3);
		alibaba.executeForm(form3);
		std::cout << form2 << std::endl;
		alibaba.signForm(form2);
		alibaba.executeForm(form2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << robocop << std::endl;
	try
	{
		std::cout << form3 << std::endl;
		robocop.signForm(form3);
		robocop.executeForm(form3);
		std::cout << form2 << std::endl;
		robocop.signForm(form2);
		robocop.executeForm(form2);
		std::cout << form1 << std::endl;
		robocop.signForm(form1);
		robocop.executeForm(form1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << trump << std::endl;
	try
	{
		std::cout << form3 << std::endl;
		trump.signForm(form3);
		trump.executeForm(form3);
		std::cout << form2 << std::endl;
		trump.signForm(form2);
		trump.executeForm(form2);
		std::cout << form1 << std::endl;
		trump.signForm(form1);
		trump.executeForm(form1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}

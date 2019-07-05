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
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int		main(void) {

	Intern			idiotOne;

	Bureaucrat		hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat		bob = Bureaucrat("Bobby Bobson", 123);
	OfficeBlock		ob;

	ob.setIntern(idiotOne);
	ob.setSigner(bob);
	ob.setExecutor(hermes);

	try
	{
		ob.doBureaucracy("mutant pig termination", "Pigley");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		ob.doBureaucracy("shrubbery creation", "tree");
		ob.doBureaucracy("robotomy request", "robot");
		ob.doBureaucracy("presidential pardon", "president");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}

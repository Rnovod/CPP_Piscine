/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 19:01:42 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/09 19:01:43 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbery Creation Form", 145, 137) {

	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form("Shrubbery Creation Form", 145, 137), _target(target) {

	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & obj) : Form("Shrubbery Creation Form", 145, 137) {

	*this = obj;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {

	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & obj) {

	if (this != &obj) {
		this->_target = obj._target;
	}
	return *this;
}

void	ShrubberyCreationForm::executed(void) {

	std::ofstream			file;

	file.open(this->_target + "_shrubbery");
	if (file.is_open())
	{
		file << "            .        +          .      .          ." << std::endl
				<< "     .            _        .                    ." << std::endl
				<< "  ,              /;-._,-.____        ,-----.__" << std::endl
				<< " ((        .    (_:#::_.:::. `-._   /:, /-._, `._," << std::endl
				<< "  `                 \\   _|`\"=:_::.`.);  \\ __/ /" << std::endl
				<< "                      ,    `./  \\:. `.   )==-\'  ." << std::endl
				<< "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           ." << std::endl
				<< ".           \\/:/`-\' , ,\\ \'` ` `   ): , /_  -o" << std::endl
				<< "       .    /:+- - + +- : :- + + -:\'  /(o-) \\)     ." << std::endl
				<< "  .      ,=\':  \\    ` `/` \' , , ,:\' `\'--\".--\"---._/`7" << std::endl
				<< "   `.   (    \\: \\,-._` ` + \'\\, ,\"   _,--._,---\":.__/" << std::endl
				<< "              \\:  `  X` _| _,\\/\'   .-\'" << std::endl
				<< ".               \":._:`\\____  /:\'  /      .           ." << std::endl
				<< "                    \\::.  :\\/:\'  /              +" << std::endl
				<< "   .                 `.:.  /:\'  }      ." << std::endl
				<< "           .           ):_(:;   \\           ." << std::endl
				<< "                      /:. _/ ,  |" << std::endl
				<< "                   . (|::.     ,`                  ." << std::endl
				<< "     .                |::.    {\\" << std::endl
				<< "                      |::.\\  \\ `." << std::endl
				<< "                      |:::(\\    |" << std::endl
				<< "              O       |:::/{ }  |                  (o" << std::endl
				<< "               )  ___/#\\::`/ (O \"==._____   O, (O  /`" << std::endl
				<< "          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~" << std::endl
				<< "     ~~~~~~~~~~~~~~~~~~~~~~~\\\\W~~~~~~~~~~~~\\|/~~" << std::endl;
	}
	return ;
}

std::string	const &	ShrubberyCreationForm::getTarget(void) const {

	return this->_target;
}

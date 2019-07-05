/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 20:00:22 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/06 20:00:23 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(void) {

	this->_tabm = new AMateria*[4];
	
	for (int i = 0; i < 4; ++i) {
		this->_tabm[i] = NULL;
	}
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & obj){

	if (this != &obj) {
		*this = obj;
	}
	return ;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & obj){

	this->_tabm = obj._tabm;
	return *this;
}

MateriaSource::~MateriaSource() {
	
}

void 		MateriaSource::learnMateria(AMateria* m) {

	int	check;

	check = 0;
	for (int i = 0; i < 4; ++i) {
		if (check == 0 && this->_tabm[i] == NULL) {
			this->_tabm[i] = m;
			check++;
		}
	}
	if (check == 0)
		std::cout << "materia source memory full." << std::endl;
	return ;
}

AMateria* 	MateriaSource::createMateria(std::string const & type) {

	for (int i = 0; i < 4; ++i) {
		if (this->_tabm[i] != NULL)
		{
			if (this->_tabm[i]->getType() == type)
			{
				AMateria *copy;
			
				copy = this->_tabm[i]->clone();
				return copy;
			}
		}
	}
	std::cout << "materia source not found." << std::endl;
	return NULL;
}

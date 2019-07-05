/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 20:00:30 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/06 20:00:31 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int		main(void)
{
	IMateriaSource* source = new MateriaSource();
	source->learnMateria(new Ice());
	source->learnMateria(new Cure());
	source->learnMateria(new Cure());
	ICharacter* c1 = new Character("lol");
	ICharacter* c2 = new Character("kek");

	AMateria*	ice_matter = source->createMateria("ice");
	AMateria*	cure_matter = source->createMateria("ice");

	c1->equip(ice_matter);
	c1->equip(cure_matter);
	c1->use(0, *c2);
	c1->use(1, *c2);
	c2->equip(cure_matter);
	c2->unequip(0);
	c2->equip(ice_matter);
	c2->use(0, *c1);
	c2->use(1, *c1);
	std::cout << "ice xp " << ice_matter->getXP() << std::endl;
	std::cout << "cure xp " << cure_matter->getXP() << std::endl;
	delete c1;
	delete c2;
	delete cure_matter;
	delete ice_matter;

	return 0;
}

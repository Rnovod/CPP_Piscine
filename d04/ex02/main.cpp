/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 20:57:33 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 20:57:34 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "TacticalMarine.hpp"
#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

inline static void	subject_test(void) {

	ISpaceMarine*	bob = new TacticalMarine;
	ISpaceMarine*	jim = new AssaultTerminator;
	ISquad*			vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i) {
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	
	delete vlc;
	return ;
}

inline static void	my_tests(void) {

	AssaultTerminator	*Harry = new AssaultTerminator;
	TacticalMarine		*Gendalf = new TacticalMarine;
	ISquad				*originals = new Squad;

	originals->push(Harry);
	originals->push(Gendalf);

	std::cout << std::endl;
	std::cout << "Originals call!" << std::endl;

	for (int i = 0; i < originals->getCount(); ++i)
	{
		ISpaceMarine* cur = originals->getUnit(i);

		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << std::endl;
	std::cout << "Clones call!" << std::endl;

	ISpaceMarine		*Clone_Harry = new AssaultTerminator(*Harry);
	ISpaceMarine		*Clone_Gendalf = new TacticalMarine(*Gendalf);

	ISquad				*clones = new Squad;

	clones->push(Clone_Harry);
	clones->push(Clone_Gendalf);

	for (int i = 0; i < clones->getCount(); ++i)
	{
		ISpaceMarine* cur = clones->getUnit(i);

		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << std::endl;
	std::cout << "Kill all" << std::endl;

	delete originals;
	delete clones;

	return ;
}

int					main(void) {

	subject_test();
	std::cout << std::endl;
	my_tests();
	return 0;
}

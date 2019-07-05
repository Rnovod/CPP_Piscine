/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:29:03 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 16:29:04 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

inline static void	subject_test(void) {

	Character*		zaz = new Character("zaz");

	std::cout << *zaz;

	Enemy*			b = new RadScorpion();
	AWeapon*		pr = new PlasmaRifle();
	AWeapon*		pf = new PowerFist();

	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;

	delete zaz;
	delete pr;
	delete pf;
	return ;
}

inline static void	own_test(void) {

	Enemy*			b1 = new SuperMutant();

	Character*		florin = new Character("Florin");

	AWeapon*		pr = new PlasmaRifle();
	AWeapon*		pf = new PowerFist();

	florin->equip(pr);
	std::cout << *florin;

	florin->attack(b1);
	std::cout << *florin;
	florin->attack(b1);
	std::cout << *florin;
	florin->attack(b1);
	std::cout << *florin;
	florin->attack(b1);
	std::cout << *florin;
	florin->attack(b1);
	std::cout << *florin;
	florin->attack(b1);
	std::cout << *florin;
	florin->attack(b1);
	std::cout << *florin;
	florin->attack(b1);
	std::cout << *florin;

	florin->recoverAP();
	florin->equip(pf);
	florin->attack(b1);
	std::cout << *florin;
	delete florin;
	delete pr;
	delete pf;
	return ;
}

int		main(void) {

	subject_test();
	std::cout << std::endl;
	own_test();
	return 0;
}

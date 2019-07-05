/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:03:43 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/04 15:03:43 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

inline static void	call_FragTrap(void) {

	FragTrap	Frobot("С-3РО");

	std::cout << std::endl;
	Frobot.vaulthunter_dot_exe("Gorilla");
	Frobot.rangedAttack("Gorilla");

	std::cout << std::endl;
	Frobot.takeDamage(20);

	std::cout << std::endl;
	Frobot.vaulthunter_dot_exe("Gorilla");
	Frobot.meleeAttack("Gorilla");

	std::cout << std::endl;
	Frobot.takeDamage(90);

	std::cout << std::endl;
	Frobot.beRepaired(100);

	std::cout << std::endl;
	Frobot.vaulthunter_dot_exe("Gorilla");
	Frobot.vaulthunter_dot_exe("Gorilla");
	std::cout << std::endl;
	Frobot.takeDamage(1);

	return ;
}

inline static void	call_ScavTrap(void) {

	ScavTrap	Srobot("WALL-E");

	std::cout << std::endl;
	Srobot.rangedAttack("Own leg");

	std::cout << std::endl;
	Srobot.takeDamage(20);

	std::cout << std::endl;
	Srobot.meleeAttack("Own leg");

	std::cout << std::endl;
	Srobot.takeDamage(86);

	std::cout << std::endl;
	Srobot.beRepaired(100);

	std::cout << std::endl;
	Srobot.challengeNewcomer();
	Srobot.challengeNewcomer();
	Srobot.challengeNewcomer();
	Srobot.challengeNewcomer();
	Srobot.challengeNewcomer();
	std::cout << std::endl;
	Srobot.takeDamage(1);

	return ;
}

inline static void	call_ClapTrap(void) {

	ClapTrap	Crobot;

	std::cout << std::endl;
	Crobot.rangedAttack("Pony");

	std::cout << std::endl;
	Crobot.takeDamage(20);

	std::cout << std::endl;
	Crobot.meleeAttack("Pony");

	std::cout << std::endl;
	Crobot.takeDamage(1000);

	std::cout << std::endl;
	Crobot.beRepaired(100);

	std::cout << std::endl;
	Crobot.takeDamage(1);

	return ;
}

inline static void	call_NinjaTrap(void) {

	NinjaTrap	Nrobot;
	FragTrap	Frobot("FragTrap");
	ScavTrap	Srobot("ScavTrap");
	ClapTrap	Crobot("ClapTrap");

	std::cout << std::endl;
	Nrobot.rangedAttack("Itachi");

	std::cout << std::endl;
	Nrobot.takeDamage(20);

	std::cout << std::endl;
	Nrobot.meleeAttack("Itachi");

	std::cout << std::endl;
	Nrobot.takeDamage(1000);

	std::cout << std::endl;
	Nrobot.beRepaired(100);

	std::cout << std::endl;
	Nrobot.takeDamage(1);

	std::cout << std::endl;
	Nrobot.ninjaShoebox(Nrobot);
	Nrobot.ninjaShoebox(Frobot);
	Nrobot.ninjaShoebox(Srobot);
	Nrobot.ninjaShoebox(Crobot);

	return ;
}

inline static void	call_SuperTrap(void) {

	SuperTrap	Super;
	NinjaTrap	Nrobot("NinjaTrap");
	FragTrap	Frobot("FragTrap");
	ScavTrap	Srobot("ScavTrap");
	ClapTrap	Crobot("ClapTrap");

	std::cout << std::endl;
	Super.rangedAttack("Lutor");

	std::cout << std::endl;
	Super.takeDamage(20);

	std::cout << std::endl;
	Super.meleeAttack("Lutor");

	std::cout << std::endl;
	Super.takeDamage(1000);

	std::cout << std::endl;
	Super.beRepaired(100);

	std::cout << std::endl;
	Super.takeDamage(1);

	std::cout << std::endl;
	Frobot.vaulthunter_dot_exe("Lutor");
	Frobot.vaulthunter_dot_exe("Lutor");
	std::cout << std::endl;
	Super.ninjaShoebox(Nrobot);
	Super.ninjaShoebox(Frobot);
	Super.ninjaShoebox(Srobot);
	Super.ninjaShoebox(Crobot);
	std::cout << std::endl;

	return ;
}

int		main(void) {

	std::srand(std::time(NULL));

	call_FragTrap();
	std::cout << std::endl;
	call_ScavTrap();
	std::cout << std::endl;
	call_ClapTrap();
	std::cout << std::endl;
	call_NinjaTrap();
	std::cout << std::endl;
	call_SuperTrap();

	return 0;
}

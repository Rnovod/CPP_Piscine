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
	std::cout << std::endl;

	return ;
}

inline static void	call_ScavTrap(void) {

	ScavTrap	Srobot("WALL-E");

	std::cout << std::endl;
	Srobot.rangedAttack("Gorilla");

	std::cout << std::endl;
	Srobot.takeDamage(20);

	std::cout << std::endl;
	Srobot.meleeAttack("Gorilla");

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
	std::cout << std::endl;

	return ;
}

int		main(void) {

	std::srand(std::time(NULL));

	call_FragTrap();
	std::cout << std::endl;
	call_ScavTrap();

	return 0;
}

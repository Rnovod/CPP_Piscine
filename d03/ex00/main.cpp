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

int		main(void) {

	FragTrap	robot1("С-3РО");
	FragTrap	robot2;

	std::string	name_robot2 = robot2.GetName();
	std::srand(std::time(NULL));

	std::cout << "LET'S BEGIN THE GAME!!!!!" << std::endl;

	std::cout << std::endl;
	robot1.rangedAttack(name_robot2);

	std::cout << std::endl;
	robot2.takeDamage(20);

	std::cout << std::endl;
	robot1.meleeAttack(name_robot2);

	std::cout << std::endl;
	robot2.takeDamage(90);

	std::cout << std::endl;
	robot2.beRepaired(100);

	std::cout << std::endl;
	robot2.vaulthunter_dot_exe("С-3РО");
	robot2.vaulthunter_dot_exe("С-3РО");
	robot2.vaulthunter_dot_exe("С-3РО");
	robot2.vaulthunter_dot_exe("С-3РО");
	robot2.vaulthunter_dot_exe("С-3РО");
	std::cout << std::endl;
	robot1.takeDamage(1);
	std::cout << std::endl;

	return 0;
}

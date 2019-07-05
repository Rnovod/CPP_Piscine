/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:08:23 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/02 17:08:24 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	call_zombies(void) {

	Zombie*		zombie0;
	Zombie*		zombie1;
	Zombie*		zombie2;
	ZombieEvent	event;

	zombie0 = event.randomChump();
	delete zombie0;

	event.setZombieType("troll");

	zombie1 = event.randomChump();
	delete zombie1;

	zombie2 = event.newZombie("Pony");
	zombie2->announce();
	delete zombie2;

	Zombie	zombie3("Bob", "human");
	Zombie	zombie4("George", "elf");

	zombie3.announce();
	zombie4.announce();
	return ;
}

int		main(void) {

	call_zombies();
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 19:26:51 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/02 19:26:52 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _zNumber(N) {

	if (N <= 0) {
		std::cout << "Number of zombies is too small!" << std::endl;
		return ;
	}

	this->_ZHorde = new Zombie[N];
	if (!this->_ZHorde) {
		std::cout << "Can't allocate memory" << std::endl;
		return ;
	}

	std::string names[] = { "Lucifer", "Gendalf", "Legolas", "Zues",
	"Gerald", "Unknown", "Valera", "Paraska", "Tirion", "Snow", "Leka",
	"Michael", "Jonny", "Freddy", "Eminem", "Florin"};
	
	std::string types[] = { "good zombie", "bad zombie", "pony", "elf",
	"mage", "god", "homosapiens", "raper", "angle", "demon", "programmer",
	"superhero", "orc", "dog", "suslik", "bastard"};

	std::srand(std::time(NULL));

	for (int i = 0; i < N; ++i) {
		this->_ZHorde[i].SetZombieName(names[rand() % 16]);
		this->_ZHorde[i].SetZombieType(types[rand() % 16]);
	}
	return ;
}

ZombieHorde::~ZombieHorde() {

	if (this->_zNumber <= 0)
		return ;
	delete [] this->_ZHorde;
	return ;
}

void	ZombieHorde::announce(void) {

	for (int i = 0; i < this->_zNumber; ++i) {
		this->_ZHorde[i].announce();
	}
}

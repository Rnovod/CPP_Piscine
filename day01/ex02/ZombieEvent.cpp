/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:08:14 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/02 17:08:15 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <ctime>

ZombieEvent::ZombieEvent(void) {
	return ;
}

ZombieEvent::~ZombieEvent(void) {
	return ;
}

void	ZombieEvent::setZombieType(std::string type) {
	
	this->_type = type;
	return ;
}

Zombie*	ZombieEvent::newZombie(std::string name) {
	
	Zombie::Zombie*	new_zombie = new Zombie(name, this->_type);

	if (!new_zombie) {
		std::cout << "Can't allocate memory" << std::endl;
		return NULL;
	}
	return new_zombie;
}

Zombie*	ZombieEvent::randomChump(void) {

	static const char	consonents[] = {'b','c','d','f','g',
		'h','j','k','l','m','n','p','q','r',
		's','t','v','w','x','z'};
	static const char	vowels[] = {'a','e','i','o','u','y'};
	std::srand(time(NULL));

	std::string	name = "";
	int 		length = std::rand() % 10;
	int 		count_c = 0;
	int 		random = rand() % 2;

	if (length < 3)
		length = 3;
	for (int i = 0; i < length; ++i, random = std::rand() % 2) {
		if (random < 1 && count_c < 2) {
			name += consonents[std::rand() % sizeof(consonents)];
			++count_c;
		}
		else {
			name += vowels[std::rand() % sizeof(vowels)];
			count_c = 0;
		}
	}
	Zombie* new_zombie = this->newZombie(name);
	new_zombie->announce();
	return new_zombie;
}

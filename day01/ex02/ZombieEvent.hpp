/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:08:19 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/02 17:08:19 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class	ZombieEvent {

public:
	ZombieEvent();
	~ZombieEvent();

	void	setZombieType(std::string type);
	Zombie*	newZombie(std::string name);
	Zombie*	randomChump(void);

private:
	std::string	_type;

};

#endif

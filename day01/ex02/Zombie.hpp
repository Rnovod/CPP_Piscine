/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:08:08 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/02 17:08:09 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie {

public:
	Zombie(std::string name, std::string type);
	~Zombie();

	void		announce(void);

	void		SetZombieName(std::string name);
	std::string	GetZombieName(void) const ;
	
	void		SetZombieType(std::string type);
	std::string	GetZombieType(void) const ;


private:
	std::string	_name;
	std::string	_type;

};

#endif

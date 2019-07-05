/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 10:54:29 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/03 10:54:30 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
public:
	HumanB(std::string name);
	~HumanB();

	void	attack(void);
	void	setWeapon(Weapon& club);

private:
	std::string	_name;
	Weapon*		_club;

};

#endif

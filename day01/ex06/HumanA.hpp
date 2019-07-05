/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 10:50:38 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/03 10:50:39 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{
public:
	HumanA(std::string name, Weapon& club);
	~HumanA();

	void	attack(void);
	void	setWeapon(Weapon club);

private:
	std::string	_name;
	Weapon&		_club;

};

#endif

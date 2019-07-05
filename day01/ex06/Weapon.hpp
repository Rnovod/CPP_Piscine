/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 10:50:55 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/03 10:50:56 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon
{
public:
	Weapon(std::string type);
	~Weapon();

	std::string const &	getType(void);
	void				setType(std::string type);

private:
	std::string	_type;

};

#endif

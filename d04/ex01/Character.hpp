/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:29:15 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 16:29:16 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {

	public:
		Character(void);
		Character(Character const & obj);
		Character(std::string const & name);
		Character & operator=(Character const & obj);
		virtual ~Character();

		void			recoverAP(void);
		void			equip(AWeapon*);
		void			attack(Enemy*);

		std::string		getName(void) const;
		int				getAP(void) const;
		AWeapon			*getWeapon(void) const;

	private:
		std::string		_name;
		AWeapon			*_weapon;
		int				_ap;
};

std::ostream &	operator<<(std::ostream &o, Character const &obj);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:27:25 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 16:27:28 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon {

	public:
		AWeapon(void);
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const & obj);
		AWeapon & operator=(AWeapon const & obj);
		virtual ~AWeapon(void);

		std::string		getName(void) const;
		int				getAPCost(void) const;
		int				getDamage(void) const;
		
		virtual void	attack(void) const = 0;

	private:
		std::string		_name;
		unsigned int	_damage;
		unsigned int	_apcost;

};

#endif

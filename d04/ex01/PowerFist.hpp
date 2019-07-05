/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:27:59 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 16:28:00 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon {

	public:
		PowerFist(void);
		PowerFist(PowerFist const & obj);
		PowerFist & operator=(PowerFist const & obj);
		virtual ~PowerFist();

		void	attack(void) const;

};

#endif


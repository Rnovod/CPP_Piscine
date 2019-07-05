/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:27:46 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 16:27:47 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

	public:
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const & obj);
		PlasmaRifle & operator=(PlasmaRifle const & obj);
		virtual ~PlasmaRifle(void);

		void	attack(void) const;
};

#endif

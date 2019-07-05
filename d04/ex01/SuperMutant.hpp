/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:28:30 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 16:28:31 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy {

	public:
		SuperMutant(void);
		SuperMutant(SuperMutant const & obj);
		SuperMutant & operator=(SuperMutant const & obj);
		virtual ~SuperMutant(void);

		virtual void	takeDamage(int damage);
};

#endif

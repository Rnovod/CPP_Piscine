/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:28:52 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 16:28:53 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy {

	public:
		RadScorpion(void);
		RadScorpion(RadScorpion const & obj);
		RadScorpion & operator=(RadScorpion const & obj);
		virtual ~RadScorpion(void);

};

#endif

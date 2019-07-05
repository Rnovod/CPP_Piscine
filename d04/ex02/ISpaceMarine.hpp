/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 20:58:19 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 20:58:20 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_H
# define ISPACEMARINE_H

#include <iostream>

class	ISpaceMarine
{
	public:

		virtual ~ISpaceMarine() {}

		virtual ISpaceMarine*	clone() const = 0;
		virtual void			battleCry() const = 0;
		virtual void			rangedAttack() const = 0;
		virtual void			meleeAttack() const = 0;

};

#endif

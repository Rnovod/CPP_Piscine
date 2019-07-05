/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 20:58:38 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 20:58:38 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H

#include "ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine
{
	public:

		TacticalMarine(void);
		TacticalMarine(TacticalMarine const &obj);
		virtual ~TacticalMarine(void);
		TacticalMarine & operator=(TacticalMarine const &r);

		ISpaceMarine*	clone(void) const;
		void			battleCry(void) const;
		void			rangedAttack(void) const;
		void			meleeAttack(void) const;
};

#endif

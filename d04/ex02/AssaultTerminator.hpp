/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 20:57:40 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 20:57:40 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine
{
	public:

		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const &obj);
		virtual ~AssaultTerminator(void);
		AssaultTerminator &operator=(AssaultTerminator const & obj);

		ISpaceMarine*	clone(void) const;
		void			battleCry(void) const;
		void			rangedAttack(void) const;
		void			meleeAttack(void) const;
};

#endif

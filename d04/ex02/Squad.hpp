/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 20:58:51 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 20:58:52 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include <iostream>

class Squad : public ISquad {

	public:

		typedef struct	s_marine {
			ISpaceMarine 	*marine;
			struct s_marine	*next;
		}				t_marine;

		Squad(void);
		Squad(Squad const & obj);
		virtual ~Squad(void);
		Squad &operator=(Squad const & obj);

		int				getCount() const;
		ISpaceMarine	*getUnit(int) const;
		int				push(ISpaceMarine*);

	private:
		int			_units;
		t_marine	*_marines;

		void		_destroyMarines(void);
		t_marine	*_createNewMarine(ISpaceMarine *marine);

};

#endif

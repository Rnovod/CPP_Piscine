/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:59:58 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/06 19:59:59 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Ice: public AMateria
{

	public:
		Ice(void);
		Ice(std::string const & type);
		Ice(Ice const &);
		~Ice();
		using AMateria::operator=;

		Ice*		clone(void) const;
		void		use(ICharacter& target);

};

#endif

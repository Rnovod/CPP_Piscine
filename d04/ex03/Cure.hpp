/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:59:37 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/06 19:59:38 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Cure: public AMateria
{

	public:
		Cure(void);
		Cure(std::string const & type);
		Cure(Cure const & obj);
		~Cure();
		using AMateria::operator=;

		Cure*		clone(void) const;
		void		use(ICharacter& target);

};

#endif

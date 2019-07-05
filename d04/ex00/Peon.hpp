/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 12:33:11 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 12:33:12 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim {

	public:
		Peon(void);
		Peon(Peon const & obj);
		Peon(std::string name);
		Peon & operator=(Peon const & obj);
		virtual ~Peon(void);

		void				SetName(std::string const & name);
		std::string const &	GetName(void) const ;

		void	getPolymorphed(void) const ;

};

std::ostream & 		operator<<(std::ostream & o, Peon const & obj);

#endif

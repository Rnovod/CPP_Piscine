/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:13:12 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 15:13:13 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include "Victim.hpp"

class Pony : public Victim {

	public:
		Pony(void);
		Pony(Pony const & obj);
		Pony(std::string name);
		Pony & operator=(Pony const & obj);
		virtual ~Pony(void);

		void				SetName(std::string const & name);
		std::string const &	GetName(void) const ;

		void	getPolymorphed(void) const ;

};

std::ostream & 		operator<<(std::ostream & o, Pony const & obj);

#endif


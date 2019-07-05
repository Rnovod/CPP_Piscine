/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 12:32:48 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 12:32:49 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {

	public:
		Sorcerer(void);
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const & obj);
		Sorcerer & operator=(Sorcerer const & obj);
		virtual ~Sorcerer(void);

		void				SetName(std::string const & name);
		std::string const &	GetName(void) const ;

		void				SetTitle(std::string const & Title);
		std::string const &	GetTitle(void) const ;

		void				polymorph(Victim const & obj) const ;

	private:
		std::string	_name;
		std::string	_title;

};

std::ostream & 	operator<<(std::ostream & o, Sorcerer const & obj);

#endif

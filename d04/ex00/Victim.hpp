/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 12:32:59 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 12:33:00 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim {

	public:
		Victim(void);
		Victim(Victim const & obj);
		Victim(std::string name);
		Victim & operator=(Victim const & obj);
		virtual ~Victim(void);

		void				SetName(std::string const & name);
		std::string const &	GetName(void) const ;

		virtual void	getPolymorphed(void) const ;

	protected:
		std::string	_name;
};

std::ostream & 	operator<<(std::ostream & o, Victim const & obj);

#endif

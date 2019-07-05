/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:59:15 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/06 19:59:16 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class	AMateria
{
	public:

		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const & obj);
		virtual ~AMateria();
		AMateria &	operator=(AMateria const & obj);

		std::string const &	getType() const;
		unsigned int		getXP() const;
		void				setXP();
		
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

	private:

		std::string		_type;
		unsigned int 	_xp;
};

#endif

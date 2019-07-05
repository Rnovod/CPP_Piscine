/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 20:00:25 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/06 20:00:26 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & obj);
		~MateriaSource();
		MateriaSource & operator=(MateriaSource const & obj);

		void 		learnMateria(AMateria*);
		AMateria* 	createMateria(std::string const & type);
		
	private:
		AMateria**		_tabm;

};

#endif

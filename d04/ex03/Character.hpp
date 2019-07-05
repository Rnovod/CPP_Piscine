/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:59:27 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/06 19:59:27 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class	Character: public ICharacter
{
	public:
		Character(void);
		Character(std::string name);
		Character(Character const & obj);
		~Character();
		Character &	operator=(Character const & obj);

		std::string const & getName() const;
		void 				equip(AMateria* m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter& target);

	private:
		std::string 	_name;
		AMateria**		_tab;

};

#endif

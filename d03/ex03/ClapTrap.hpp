/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 18:36:20 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/04 18:36:20 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{

	public:
		ClapTrap(void);
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const & obj);
		ClapTrap & operator=(ClapTrap const & obj);
		~ClapTrap();

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);

		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string GetName(void) const;
		void		SetName(std::string const & name);

	protected:
		unsigned int	_HP;
		unsigned int	_maxHP;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_lvl;
		unsigned int	_meleeDamage;
		unsigned int	_rangedDamage;
		unsigned int	_armor;
		std::string		_name;
	
};

#endif

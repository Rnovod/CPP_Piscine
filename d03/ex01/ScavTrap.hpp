/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 16:53:51 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/04 16:53:52 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap
{

	public:
		ScavTrap(void);
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const & obj);
		ScavTrap & operator=(ScavTrap const & obj);
		~ScavTrap();

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);

		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string GetName(void) const ;
		void		SetName(std::string const & name);

		void		challengeNewcomer(void);

	private:
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

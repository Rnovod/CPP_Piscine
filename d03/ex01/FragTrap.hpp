/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:03:40 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/04 15:03:40 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <map>

class FragTrap
{

	public:
		FragTrap(void);
		FragTrap(std::string const name);
		FragTrap(FragTrap const & obj);
		FragTrap & operator=(FragTrap const & obj);
		~FragTrap();

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);

		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string GetName(void) const ;
		void		SetName(std::string const & name);

		void		vaulthunter_dot_exe(std::string const & target);

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

		void		theForce(std::string const & target) const ;
		void		avadaKedavra(std::string const & target) const ;
		void		deathTouch(std::string const & target) const ;
		void		kiss(std::string const & target) const ;
		void		punch(std::string const & target) const ;
		void		minigun(std::string const & target) const ;
		void		swordJedi(std::string const & target) const ;
		void		bazuka(std::string const & target) const ;
		void		blaster(std::string const & target) const ;
		void		kick(std::string const & target) const ;
	
};

#endif

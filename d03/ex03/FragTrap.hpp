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
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:
		FragTrap(void);
		FragTrap(std::string const name);
		FragTrap(FragTrap const & obj);
		FragTrap & operator=(FragTrap const & obj);
		~FragTrap();

		void	vaulthunter_dot_exe(std::string const & target);

	private:
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

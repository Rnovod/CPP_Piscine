/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 20:27:24 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/04 20:27:25 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{

	public:
		NinjaTrap(void);
		NinjaTrap(std::string const name);
		NinjaTrap(NinjaTrap const & obj);
		NinjaTrap & operator=(NinjaTrap const & obj);
		~NinjaTrap();

		void	ninjaShoebox(NinjaTrap const & obj);
		void	ninjaShoebox(ScavTrap const & obj);
		void	ninjaShoebox(FragTrap const & obj);
		void	ninjaShoebox(ClapTrap const & obj);

};

#endif

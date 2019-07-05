/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 21:36:02 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/04 21:36:03 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{

	public:
		SuperTrap(void);
		SuperTrap(std::string const name);
		SuperTrap(SuperTrap const & obj);
		SuperTrap & operator=(SuperTrap const & obj);
		~SuperTrap();

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 19:26:48 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/02 19:26:48 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include "Zombie.hpp"

class	ZombieHorde
{

public:
	ZombieHorde(int N);
	~ZombieHorde();
	
	void	announce(void);

private:
	Zombie*		_ZHorde;
	int			_zNumber;

};

#endif

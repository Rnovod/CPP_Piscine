/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 17:08:23 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/02 17:08:24 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

void	create_horde(int n) {

	ZombieHorde		Horde(n);

	Horde.announce();
}

int		main(void) {

	int	N = 0;

	std::cout << "Put number of your zombie-army: ";
	std::cin >> N;
	create_horde(N);
	return 0;
}

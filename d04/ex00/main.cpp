/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 12:33:16 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 12:33:17 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Pony.hpp"

int		main(void)
{
	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon		joe("Joe");
	Pony		flower("Flower");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(flower);
	return 0;
}

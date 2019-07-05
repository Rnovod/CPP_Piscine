/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:26:42 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/03 16:26:42 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

int		main(void) {

	Human	Harry;

	Harry.action("melee", "Volan-De-Mort");
	Harry.action("ranged", "Volan-De-Mort");
	Harry.action("shout", "Volan-De-Mort");
	return 0;
}

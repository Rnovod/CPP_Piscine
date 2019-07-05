/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 20:08:03 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/10 20:08:04 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"
#include <ctime>

int		main(void) {

	srand(time(NULL));

	void		*serial = serialize();
	Data		*deserial = deserialize(serial);
	
	std::cout << deserial->s1 << std::endl << deserial->n << std::endl << deserial->s2 << std::endl;

	delete reinterpret_cast<char *>(serial);
	delete deserial;
	return 0;
}

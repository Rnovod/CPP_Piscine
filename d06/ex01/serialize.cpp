/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 20:44:31 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/10 20:44:31 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

void	*serialize(void) {

	char	*data = new char[20];

	static const char	alphanum[] = "0123456789"
					"abcdefghijklmnopqrstuvwxyz"
					"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	for (int i = 0; i < 8; ++i) {
		data[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
	}
	*(reinterpret_cast<int *>(&data[8])) = rand();
	for (int i = 12; i < 20; ++i) {
		data[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
	}

	return reinterpret_cast<void *>(data);
}

Data	*deserialize(void *raw) {

	Data	*ret = new Data();

	ret->s1.assign(reinterpret_cast<char *>(raw), 8);
	ret->n = *reinterpret_cast<int *>(&reinterpret_cast<char *>(raw)[8]);
	ret->s2.assign(&reinterpret_cast<char *>(raw)[12], 8);

	return ret;
}

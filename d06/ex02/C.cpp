/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 21:05:44 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/10 21:05:45 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C(void) {

	return ;
}

C::C(C const & obj) {

	*this = obj;
	return ;
}

C::~C(void) {

	return ;
}

C &	C::operator=(C const & obj) {

	if (this != &obj) {
		(void)obj;
	}
	return *this;
}

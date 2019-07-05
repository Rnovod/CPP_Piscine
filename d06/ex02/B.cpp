/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 21:05:40 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/10 21:05:40 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B(void) {

	return ;
}

B::B(B const & obj) {

	*this = obj;
	return ;
}

B::~B(void) {

	return ;
}

B &	B::operator=(B const & obj) {

	if (this != &obj) {
		(void)obj;
	}
	return *this;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 21:05:30 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/10 21:05:31 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void) {

	return;
}

A::A(A const & obj) {

	*this = obj;
	return;
}

A::~A(void) {

	return;
}

A &	A::operator=(A const & obj) {

	if (this != &obj) {
		(void)obj;
	}
	return *this;
}

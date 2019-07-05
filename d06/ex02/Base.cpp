/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 21:05:54 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/10 21:05:55 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base(void){

	return ;
}

Base::Base(Base const & obj) {

	*this = obj;
	return ;
}
	
Base::~Base(void){

	return ;
}

Base & Base::operator=(Base const & obj){

	if (this != &obj) {
		(void)obj;
	}
	return *this;
}

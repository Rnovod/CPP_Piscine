/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 14:25:37 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/02 14:25:38 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void) {
	std::cout << "Pony was born!" << std::endl;
	return ;
}

Pony::~Pony(void) {
	std::cout << "Pony died!" << std::endl;
	return ;
}

int		Pony::GetPonnyWight(void) {
	return this->weight;
}

void	Pony::SetPonnyWight(int weight) {
	this->weight = weight;
}

std::string	Pony::GetPonnyColor(void) {
	return this->color;
}

void	Pony::SetPonnyColor(std::string color) {
	this->color = color;
}

bool	Pony::GetPonnyStriped(void) {
	return this->striped;
}

void	Pony::SetPonnyStriped(bool striped) {
	this->striped = striped;
}

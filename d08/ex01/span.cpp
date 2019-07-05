/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 21:00:27 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/11 21:00:28 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iterator>
#include <numeric>
#include <algorithm>

span::span(void) {
	return ;
}

span::span(unsigned int N) {
	_v.reserve(N);
	return ;
}

span::span(span const & obj) {
	*this = obj;
	return ;
}

span::~span(void) {
	return ;
}

span & span::operator=(span const & obj) {
	if (this != &obj) {
		_v = obj._v;
	}
	return *this;
}

void	span::addNumber(int num) {
	if (_v.size() < _v.capacity())
	{
		if (std::find(_v.begin(), _v.end(), num) == _v.end()) {
			_v.push_back(num);
		} else {
			throw std::invalid_argument("Number is repeated.");
		}
	}
	else {
		throw std::out_of_range("Error: can't add the number.");
	}
	return ;
}


int		span::shortestSpan(void) {
	if (_v.size() <= 1) {
		throw std::logic_error("Error: not enough numbers.");
	}

	std::vector<int> 	tmp = _v;

	std::sort(tmp.begin(), tmp.end());
	std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin() - 1);
	return *std::min_element(tmp.begin(), tmp.end());
}

int		span::longestSpan(void) {
	if (_v.size() <= 1) {
		throw std::logic_error("Error: not enough numbers.");
	}

	int	min = *std::min_element(_v.begin(), _v.end());
	int	max = *std::max_element(_v.begin(), _v.end());

	return max - min;
}

void	span::addNumbers(std::vector<int>::iterator it, std::vector<int>::iterator end) {

	if ((_v.capacity() - _v.size()) >= static_cast<unsigned int>(std::distance(it, end)))
	{
		for (;it != end; ++it) {
			_v.push_back(*it);
		}
	} else {
		throw std::out_of_range("Error: can't add the number.");
	}
	return ;
}



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 14:04:40 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/10 14:04:41 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <errno.h>
#include <climits>
#include <cmath>

Convert::Convert(void) : _literal("a") {

	return ;
}

Convert::~Convert(void) {

	return ;
}

Convert::Convert(std::string const & literal) : _literal(literal) {

	return ;
}

Convert::Convert(Convert const & obj) {

	*this = obj;
	return ;
}

Convert & Convert::operator=(Convert const &) {

	return *this;
}

void	Convert::setPrecision(void) {

	int	i = 0;
	int	precision = 0;

	std::cout << std::fixed;
	for (;_literal[i] && _literal[i] != '.'; ++i) {
	}
	++i;
	for (;_literal[i] && isdigit(_literal[i]); ++i)
	{
		precision++;
	}
	std::cout.precision(precision == 0 ? 1 : precision);
	return ;
}

char	Convert::convertToChar(void) {

	int	c = std::atoi(_literal.c_str());

	if (c > static_cast<int>(CHAR_MAX) || c < static_cast<int>(CHAR_MIN) ||
		std::isnan(c) || std::isinf(c) || errno) {
		throw ImpossibleConversion();
	} else if (!isprint(c)) {
		throw NonDisplayable();
	}
	return static_cast<char>(c);
}

int		Convert::convertToInt(void) {

	long	i = std::atol(_literal.c_str());

	if (i > static_cast<double>(INT_MAX) || i < static_cast<double>(INT_MIN) ||
		std::isnan(i) || std::isinf(i) || errno) {
		throw ImpossibleConversion();
	}
	return static_cast<int>(i);
}

float	Convert::convertToFloat(void) {

	double	f = std::atof(_literal.c_str());

	if (f > static_cast<double>(std::numeric_limits<float>::max())
		|| std::isnan(f) || std::isinf(f) || errno) {
		throw ImpossibleConversion();
	}
	setPrecision();
	return static_cast<float>(f);
}

double	Convert::convertToDouble(void) {

	double	d = std::strtod(_literal.c_str(), NULL);

	if (std::isnan(d) || std::isinf(d) || errno) {
		throw ImpossibleConversion();
	}
	setPrecision();
	return d;
}

Convert::ImpossibleConversion::ImpossibleConversion(void) {

	return ;
}

Convert::ImpossibleConversion::ImpossibleConversion(ImpossibleConversion const & obj) {

	*this = obj;
	return ;
}

Convert::ImpossibleConversion::~ImpossibleConversion(void) throw() {

	return ;
}

Convert::ImpossibleConversion & Convert::ImpossibleConversion::operator=(ImpossibleConversion const & obj) {

	if (this != &obj) {
		std::exception::operator=(obj);
	}
	return *this;
}

char const * Convert::ImpossibleConversion::what(void) const throw() {

	return "impossible";
}

Convert::NonDisplayable::NonDisplayable(void) {

	return ;
}

Convert::NonDisplayable::NonDisplayable(NonDisplayable const & obj) {

	*this = obj;
	return ;
}

Convert::NonDisplayable::~NonDisplayable(void) throw() {

	return ;
}

Convert::NonDisplayable & Convert::NonDisplayable::operator=(NonDisplayable const & obj) {

	if (this != &obj) {
		std::exception::operator=(obj);
	}
	return *this;
}

char const * Convert::NonDisplayable::what(void) const throw() {

	return "Non displayable";
}
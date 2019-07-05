/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 19:11:20 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/03 19:11:20 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class	Fixed {

public:
	Fixed(void);
	~Fixed(void);

	Fixed( Fixed const & obj );
	Fixed( int const n );
	Fixed( float const n );

	Fixed &	operator=( Fixed const & obj );
	Fixed	operator+( Fixed const & obj );
	Fixed	operator-( Fixed const & obj );
	Fixed	operator*( Fixed const & obj );
	Fixed	operator/( Fixed const & obj );

	bool	operator>( Fixed const & obj );
	bool	operator<( Fixed const & obj );
	bool	operator>=( Fixed const & obj );
	bool	operator<=( Fixed const & obj );
	bool	operator==( Fixed const & obj );
	bool	operator!=( Fixed const & obj );

	Fixed &	operator++(void);
	Fixed	operator++(int);
	Fixed &	operator--(void);
	Fixed	operator--(int);

	static Fixed &	min(Fixed & value1, Fixed & value2);
	static Fixed &	max(Fixed & value1, Fixed & value2);

	static Fixed const & min(Fixed const & value1, Fixed const & value2);
	static Fixed const & max(Fixed const & value1, Fixed const & value2);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;

	int		toInt( void ) const;

private:

	int					_raw;
	static int const	_bits = 8;

};

std::ostream & operator<<( std::ostream & o, Fixed const & obj);

#endif

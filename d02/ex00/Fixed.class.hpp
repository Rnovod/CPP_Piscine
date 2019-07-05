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

class	Fixed {

public:
	Fixed(void);
	~Fixed(void);

	Fixed( Fixed const & obj );

	Fixed &	operator=( Fixed const & obj );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:

	int					_raw;
	static int const	_bits = 8;

};

#endif

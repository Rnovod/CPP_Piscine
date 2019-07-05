/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:39:25 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/03 18:39:26 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_CLASS_H
# define INTEGER_CLASS_H

# include <iostream>

class Integer {

public:

	Integer(int const n);
	~Integer(void);

	int		getValue( void ) const;

	Integer &	operator=( Integer const & rhs);
	Integer		operator+( Integer const & rhs) const;

private:

	int		_n;

};

std::ostream & operator<<( std::ostream & o, Integer const & rhs);

#endif

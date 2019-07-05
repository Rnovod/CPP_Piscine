/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 10:53:04 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/01 10:53:05 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class Sample {

public:

	Sample( int v );
	~Sample( void );

	int		getFoo( void ) const;
	int		compare( Sample * other ) const;

private:

	int		_foo;

};

#endif

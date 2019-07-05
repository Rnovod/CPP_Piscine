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

	int		publicFoo;

	Sample( void );
	~Sample( void );

	void	publicBar( void ) const;


private:

	int		_privateFoo;

	void	_privateBar( void ) const;

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 21:05:36 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/10 21:05:37 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include "Base.hpp"

class	B : public Base
{

	public:
		B(void);
		B(B const & obj);
		virtual ~B(void);
		B &	operator=(B const & obj);

}; 

#endif

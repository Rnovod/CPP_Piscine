/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 21:05:47 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/10 21:05:47 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class	C : public Base
{

	public:
		C(void);
		C(C const & obj);
		virtual ~C(void);
		C & operator=(C const & obj);

}; 


#endif

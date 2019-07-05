/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 21:05:33 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/10 21:05:34 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include "Base.hpp"

class	A : public Base
{

	public:
		A(void);
		A(A const & obj);
		virtual ~A(void);
		A &	operator=(A const & obj);

}; 


#endif

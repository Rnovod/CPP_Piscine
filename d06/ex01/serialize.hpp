/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 20:43:26 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/10 20:43:28 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>

struct	Data
{
	std::string		s1;
	int				n;
	std::string		s2;
};

void	*serialize(void);
Data	*deserialize(void *raw);

#endif

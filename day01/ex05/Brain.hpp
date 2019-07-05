/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 20:44:30 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/02 20:44:31 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>

class	Brain
{
public:
	Brain();
	~Brain();

	void 		setBrainIq(int iq);
	int 		getBrainIq(void) const ;

	std::string	identify(void) const;

private:
	int			_iq;
};

#endif


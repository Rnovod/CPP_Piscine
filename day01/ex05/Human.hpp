/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 20:44:45 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/02 20:44:45 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include "Brain.hpp"

class	Human
{
public:
	Human();
	~Human();

	std::string		identify(void);
	Brain const &	getBrain();

private:
	Brain const _own_brain;

};

#endif

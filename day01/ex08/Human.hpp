/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:26:23 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/03 16:26:25 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>

class Human
{

private:
	void	meleeAttack(std::string const & target);
	void	rangedAttack(std::string const & target);
	void	intimidatingShout(std::string const & target);

public:
	void	action(std::string const & action_name, std::string const & target);

};

#endif

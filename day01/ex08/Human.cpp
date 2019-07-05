/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:26:37 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/03 16:26:37 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <map>

typedef void (Human::*ptr_fun)(std::string const &);

void	Human::meleeAttack(std::string const & target) {
	std::cout << "Kgh!!! to " << target << std::endl;
	return ;
}

void	Human::rangedAttack(std::string const & target) {
	std::cout << "AVADA KEDAVRA to " << target << std::endl;
	return ;
}

void	Human::intimidatingShout(std::string const & target) {
	std::cout << "FUS RO DAH!!! to " << target << std::endl;
	return ;
}

void	Human::action(std::string const & action_name, std::string const & target) {

	std::map<std::string, ptr_fun> m;

	m.insert(std::make_pair("melee", &Human::meleeAttack));
	m.insert(std::make_pair("ranged", &Human::rangedAttack));
	m.insert(std::make_pair("shout", &Human::intimidatingShout));

	ptr_fun ptr = m[action_name];
	(this->*ptr)(target);
	return ;
}

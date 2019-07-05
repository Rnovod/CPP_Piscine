/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 20:28:04 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/02 20:28:04 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void) {

	std::string	brain = "HI THIS IS BRAIN";

	std::string	*brain_ptr = &brain;
	std::string	&brain_ref = brain;

	std::cout << "Pointer: " << *brain_ptr << std::endl;
	std::cout << "Reference: " << brain_ref << std::endl;
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memoryLeak.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 14:25:32 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/02 14:25:33 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak()
{
	std::string* panthere = new std::string("String panthere");
	if (!panthere) {
		std::cout << "Can't allocate memory!" << std::endl;
		return ;
	}
	std::cout << *panthere << std::endl;
	delete panthere;
}

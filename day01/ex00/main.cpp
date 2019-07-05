/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 14:25:32 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/02 14:25:33 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void) {
	
	Pony*	heap_pony = new Pony;

	if (!heap_pony) {
		std::cout << "Can't allocate memory!" << std::endl;
		return ;
	}
	heap_pony->SetPonnyColor("blue");
	heap_pony->SetPonnyWight(400);
	heap_pony->SetPonnyStriped(false);
	delete heap_pony;
	return ;
}

void	ponyOnTheStack(void) {
	
	Pony	obj;

	obj.SetPonnyColor("red");
	obj.SetPonnyWight(100);
	obj.SetPonnyStriped(true);
	return ;
}

int		main(void) {

	std::cout << "Call ponyOnTheStack :" << std::endl;
	ponyOnTheStack();
	std::cout << "Call ponyOnTheHeap :" << std::endl;
	ponyOnTheHeap();
	std::cout << "End of Ponies population." << std::endl;

	return 0;
}

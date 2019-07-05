/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 13:48:32 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/02 13:48:40 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{

	int		balls = 42;

	int*	balls_ptr = &balls;
	int&	balls_ref = balls;


	std::cout << balls << " " << *balls_ptr << " " << balls_ref << std::endl;


	*balls_ptr = 21;

	std::cout << balls << std::endl;

	balls_ref = 84;

	std::cout << balls << std::endl;
	return 0;
}

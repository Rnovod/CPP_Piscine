/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 19:01:40 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/11 19:01:41 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"
#include <array>

int		main(void)
{
	std::array<int, 50>		arr;

	std::srand(std::time(0));

	std::cout << "array[50] with random numbers between 0 - 101" << std::endl;
	for (int i = 0; i < 50; ++i)
	{
		arr[i] = rand() % 101;
		std::cout << arr[i] << " ";
	}

	int num;
	
	std::cout << std::endl << "try to find number - " << (num = rand() % 101) << std::endl;
	try
	{
		num = *easyfind(arr, num);
		std::cout << num << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}

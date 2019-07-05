/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 15:59:06 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/11 15:59:07 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.tpp"

int		main(void) {


	Array<int>		array1(10);
	Array<int>		array2(20);
	Array<double>	array3(30);


	std::cout << array1[1] << std::endl;
	std::cout << array2[1] << std::endl;

	array1[1] = 42;
	array2[1] = 10;

	std::cout << array1[1] << std::endl;
	std::cout << array2[1] << std::endl;

	std::cout << std::endl << "Operator =" << std::endl;
	array1 = array2;
	std::cout << array1[1] << std::endl;
	std::cout << array2[1] << std::endl;

	array3[1] = 3.14;
	std::cout << array3[1] << std::endl;

	std::cout << std::endl << "Over" << std::endl;
	try
	{
		array1[30] = 42;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}

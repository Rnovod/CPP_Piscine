/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 15:29:16 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/11 15:29:17 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	iter( T *addr, size_t len, void (*ft)(T const &) ) {

	if (!addr || !ft) {
		return ;
	}
	for (size_t i = 0; i < len; ++i) {
		(*ft)(addr[i]);
	}
	return ;
}

template <typename T>
void	print(T & smth) {

	std::cout << smth << " " ;
	return ;
}

int		main(void) {

	int			intArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	char		charArray[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	float		floatArray[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};
	double		doubleArray[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};
	std::string	stringArray[10] = {"Hello", "world", "!", "Or", "hello", "corrector", ".", "Yes,", "you", "!"};

	std::cout << "int array:" << std::endl;
	iter<int>(intArray, sizeof(intArray) / sizeof(int), &print);
	std::cout << std::endl << "char array:" << std::endl;
	iter<char>(charArray, sizeof(charArray) / sizeof(char), &print);
	std::cout << std::endl << "float array:" << std::endl;
	iter<float>(floatArray, sizeof(floatArray) / sizeof(float), &print);
	std::cout << std::endl << "double array:" << std::endl;
	iter<double>(doubleArray, sizeof(doubleArray) / sizeof(double), &print);
	std::cout << std::endl << "string array:" << std::endl;
	iter<std::string>(stringArray, sizeof(stringArray) / sizeof(std::string), &print);
	std::cout << std::endl;
	return 0;
}

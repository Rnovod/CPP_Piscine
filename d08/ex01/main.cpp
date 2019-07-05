/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 21:00:35 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/11 21:00:36 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"
#include <array>

int		main(void)
{
	span	a(10000);

	std::vector<int>	vec;

	for (int i = 0; i < 10000; ++i)
	{
		vec.push_back(i);
	}

	std::vector<int>::iterator	beg = vec.begin();
	std::vector<int>::iterator	end = vec.end();
	
	try
	{
		a.addNumbers(beg, end);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		int ret = a.longestSpan();
		std::cout << "longest span: " << ret << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		int ret = a.shortestSpan();
		std::cout << "shortest span: " << ret << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Not valid:" << std::endl;

	std::cout << "add number that will out of range" << std::endl;
	try
	{
		a.addNumber(5);
		std::cout << "add success" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	span	b(100);
	std::cout << "Try to find span in empty data: " << std::endl;
	try
	{
		int ret = b.longestSpan();
		std::cout << "longest span: " << ret << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		int ret = b.shortestSpan();
		std::cout << "shortest span: " << ret << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "Add one number and try again: " << std::endl;
	try
	{
		b.addNumber(5);
		std::cout << "add success" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		int ret = b.longestSpan();
		std::cout << "longest span: " << ret << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		int ret = b.shortestSpan();
		std::cout << "shortest span: " << ret << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "Random number: " << std::endl;

	span	t(10);
	int		sign;
	int		num;

	std::srand(std::time(0));

	try
	{
		for (int i = 0; i < 10; ++i)
		{
			sign = std::rand() % 2 == 1 ? -1 : 1;
			num = (std::rand() % 25) * sign;
			std::cout << num << " ";
			t.addNumber(num);
		}
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		int ret = t.longestSpan();
		std::cout << "longest span: " << ret << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		int ret = t.shortestSpan();
		std::cout << "shortest span: " << ret << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
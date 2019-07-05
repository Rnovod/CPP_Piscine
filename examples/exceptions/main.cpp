/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:41:15 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/08 18:41:16 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{

	char	ch;

	std::cout << "Put character: ";
	while (std::cin >> ch)
	{
		try
		{
			if (ch == 'a')
			{
				throw "bla";
			}
			std::cout << ch << std::endl;   
		}
		catch (const char *err)
		{
			std::cout << err << std::endl;
		}
		std::cout << "Put character: ";
	}
	return 0;
}

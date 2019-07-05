/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/24 20:59:53 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/24 21:33:25 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "identify.hpp"
#include "Base.hpp"

int		main(void) {

	Base	*ABC;

	std::srand(std::time(0));
	ABC = generate();
	std::cout << "From pointer" << std::endl;
	identify_from_pointer(ABC);

	std::cout << "From references" << std::endl;
	identify_from_reference(*ABC);
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 19:01:44 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/11 19:01:44 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
typename T::iterator	easyfind(T & container, int num)
{
	typename T::iterator it = std::find(container.begin(), container.end(), num);
	
	if (it != container.end()) {
		return it;
	}
	throw std::logic_error("No occurence found.");
}


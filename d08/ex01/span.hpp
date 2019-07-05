/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 21:00:31 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/11 21:00:32 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class span {

	public:
		span(unsigned int N);
		span(span const & obj);
		~span(void);
		span & operator=(span const & obj);

		void	addNumber(int num);

		int		shortestSpan(void);
		int		longestSpan(void);

		void	addNumbers(std::vector<int>::iterator beg, std::vector<int>::iterator end);

	private:
		span(void);

		std::vector<int>	_v;

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 14:04:46 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/10 14:04:47 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>

class	Convert
{

	public:
		Convert(void);
		virtual ~Convert(void);
		Convert(std::string const & literal);
		Convert(Convert const & obj);
		Convert & operator=(Convert const & obj);


		class ImpossibleConversion : public std::exception
		{

			public:

				ImpossibleConversion(void);
				ImpossibleConversion(ImpossibleConversion const & obj);
				virtual ~ImpossibleConversion(void) throw();
				ImpossibleConversion & operator=(ImpossibleConversion const & obj);
				char const * what(void) const throw();
		};

		class NonDisplayable : public std::exception
		{

			public:

				NonDisplayable(void);
				NonDisplayable(NonDisplayable const & obj);
				virtual ~NonDisplayable(void) throw();
				NonDisplayable & operator=(NonDisplayable const & obj);
				char const * what(void) const throw();
		};

		void	setPrecision();

		char	convertToChar();
		int		convertToInt();
		float	convertToFloat();
		double	convertToDouble();

	private:
		std::string	_literal;
};

#endif


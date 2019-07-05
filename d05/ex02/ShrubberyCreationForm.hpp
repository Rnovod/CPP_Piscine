/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 19:01:47 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/09 19:01:47 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <stdexcept>
# include <iostream>
# include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & obj);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & obj);
		virtual ~ShrubberyCreationForm(void);

		void	executed(void);

		std::string	const & getTarget(void) const ;

	private:
		std::string		_target;

};

#endif

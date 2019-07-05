/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 20:51:12 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/09 20:51:13 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_HPP
# define Intern_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Intern 
{

	public:
		Intern(void);
		Intern(Intern const & src);
		~Intern(void);
		Intern & operator=(Intern const & obj);

		Form *	makeForm(std::string const & form_name, std::string const & target);

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 19:02:16 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/09 19:02:17 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <stdexcept>
# include <iostream>
# include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const & target);
		PresidentialPardonForm(PresidentialPardonForm const & obj);
		PresidentialPardonForm & operator=(PresidentialPardonForm const & obj);
		virtual ~PresidentialPardonForm(void);

		std::string	const &	getTarget(void) const;

		void	executed(void);

	private:
		std::string		_target;

};

#endif

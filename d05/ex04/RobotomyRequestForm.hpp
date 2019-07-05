/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 19:02:04 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/09 19:02:05 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <stdexcept>
# include <iostream>
# include "Form.hpp"

class	RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & obj);
		RobotomyRequestForm & operator=(RobotomyRequestForm const & obj);
		virtual ~RobotomyRequestForm(void);

		std::string	const &	getTarget(void) const;

		void	executed(void);

	private:
		std::string		_target;

};

#endif

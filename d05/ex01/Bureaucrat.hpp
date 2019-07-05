/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:28:01 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/08 18:28:02 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <stdexcept>
# include <iostream>
# include "Form.hpp"

class	Form;

class	Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string const & name, int grade);
		Bureaucrat(Bureaucrat const & obj);
		Bureaucrat & operator=(Bureaucrat const & obj);
		virtual ~Bureaucrat(void);

		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				GradeTooHighException(GradeTooHighException const & obj);
				~GradeTooHighException(void) throw();
				GradeTooHighException &	operator=(GradeTooHighException const & obj);
				virtual const char * what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				GradeTooLowException(GradeTooLowException const & obj);
				~GradeTooLowException(void) throw();
				GradeTooLowException &	operator=(GradeTooLowException const & obj);
				virtual const char * what(void) const throw();
			};

		std::string					getName(void) const;
		int							getGrade(void) const;

		void						incrementGrade(void);
		void						decrementGrade(void);

		void						signForm(Form & form) const;

	private:
		const std::string	_name;
		int					_grade;

	
};

std::ostream &	operator<<(std::ostream &o, Bureaucrat const & obj);

#endif

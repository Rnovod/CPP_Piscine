/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 15:19:07 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/09 15:19:08 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <stdexcept>
# include <iostream>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	public:
		Form(void);
		Form(std::string const & name, int signGrade, int executeGrade);
		Form(Form const & obj);
		Form & operator=(Form const & obj);
		virtual ~Form(void);
	
	class	GradeTooHighException : public std::exception
	{
		public:

			GradeTooHighException(void);
			GradeTooHighException(GradeTooHighException const & obj);
			virtual ~GradeTooHighException(void) throw();
			GradeTooHighException & operator=(GradeTooHighException const & obj);
			virtual const char * what() const throw();

	};
	class	GradeTooLowException : public std::exception
	{
		public:
	
			GradeTooLowException(void);
			GradeTooLowException(GradeTooLowException const & obj);
			virtual ~GradeTooLowException(void) throw();
			GradeTooLowException & operator=(GradeTooLowException const & obj);
			virtual const char *  what(void) const throw();

	};
	class	NotSignException: public std::exception
	{
		public:
			NotSignException(void);
			~NotSignException(void) throw();
			NotSignException(NotSignException const & src);
			NotSignException & operator=(NotSignException const & obj);
			virtual const char * what(void) const throw();
	};

	std::string		getName(void) const ;
	bool			getSign(void) const ;
	int				getSignGrade(void) const ;
	int				getExecGrade(void) const ;

	void			beSigned(Bureaucrat const & person);

	virtual void	execute(Bureaucrat const & executor);
	virtual void	executed(void);

	private:
		std::string	const	_name;
		bool				_sign;
		const int			_signGrade;
		const int			_execGrade;
		
};

std::ostream &	operator<<(std::ostream &o, Form const & obj);

#endif

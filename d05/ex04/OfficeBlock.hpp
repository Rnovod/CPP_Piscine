/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 21:03:24 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/09 21:03:24 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

# include <string>
# include "Intern.hpp"
# include "Bureaucrat.hpp"

class	OfficeBlock
{

	public:
		OfficeBlock(void);
		~OfficeBlock(void);
		OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executor);

		void		doBureaucracy(std::string const &name, std::string const &target);

		void		setIntern(Intern &intern);
		void		setSigner(Bureaucrat &signer);
		void		setExecutor(Bureaucrat &executor);

		class	NoInternException: public std::exception
		{
			public:
			NoInternException(void);
			~NoInternException(void) throw();
			NoInternException(NoInternException const & obj);
			NoInternException &	operator=(NoInternException const & obj);
			char const	* what(void) const throw();
		};

		class	NoSignException: public std::exception
		{
			public:
			NoSignException(void);
			~NoSignException(void) throw();
			NoSignException(NoSignException const & obj);
			NoSignException	&	operator=(NoSignException const & obj);
			char const	* what(void) const throw();
		};

		class	NoExecutorException: public std::exception
		{
			public:
			NoExecutorException(void);
			~NoExecutorException(void) throw();
			NoExecutorException(NoExecutorException const & obj);
			NoExecutorException	&	operator=(NoExecutorException const & obj);
			char const	* what(void) const throw();
		};

		class	SignerGradeTooLowException: public std::exception
		{
			public:
			SignerGradeTooLowException(void);
			~SignerGradeTooLowException(void) throw();
			SignerGradeTooLowException(SignerGradeTooLowException const & obj);
			SignerGradeTooLowException &	operator=(SignerGradeTooLowException const & obj);
			char const	* what(void) const throw();
		};

		class	ExecutorGradeTooLowException: public std::exception
		{
			public:
			ExecutorGradeTooLowException(void);
			~ExecutorGradeTooLowException(void) throw();
			ExecutorGradeTooLowException(ExecutorGradeTooLowException const & obj);
			ExecutorGradeTooLowException &	operator=(ExecutorGradeTooLowException const & obj);
			char const	* what(void) const throw();
		};

		private:
			Intern					*_intern;
			Bureaucrat				*_signer;
			Bureaucrat				*_executor;
};

#endif

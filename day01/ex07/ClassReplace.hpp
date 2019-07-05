/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassReplace.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 14:06:53 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/03 14:06:54 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSREPLACE_HPP
# define CLASSREPLACE_HPP

# include "replace.hpp"

class	Replace
{

public:
	Replace();
	~Replace();

	int				SetOriginFile(char const *& filename);

	int				SetReplaceFile(void);

	std::string		GetStringFind(void) const ;
	int				SetStringFind(char const *& find);

	std::string		GetStringReplace(void) const ;
	int				SetStringReplace(char const *& replace);

	void			ReplaceString(void);

private:
	std::ifstream	_ofile;
	std::fstream	_rfile;
	std::string		_name_ofile;
	std::string		_name_rfile;
	std::string		_fstring;
	std::string		_rstring;

};

#endif

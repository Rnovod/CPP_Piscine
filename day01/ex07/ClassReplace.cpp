/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassReplace.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 14:06:41 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/03 14:06:41 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassReplace.hpp"

Replace::Replace(void) {
	return ;
}

Replace::~Replace(void) {

	if (this->_ofile.is_open())
		this->_ofile.close();
	if (this->_rfile.is_open())
		this->_rfile.close();
}

int				Replace::SetOriginFile(char const *& filename) {
	this->_ofile.open(filename);
	if (!this->_ofile.is_open()) {
		std::cout << "Can't open the file: "<< filename << std::endl;
		return -1;
	}
	this->_name_ofile = std::string(filename);
	return 1;
}

int				Replace::SetReplaceFile(void) {

	if (!this->_ofile.is_open() || this->_name_ofile == "") {
		std::cout << "The file didn't open" << std::endl;
		return -1;
	}
	this->_name_rfile = this->_name_ofile + std::string(".replace");
	this->_rfile.open(this->_name_rfile, std::fstream::in | std::fstream::out | std::fstream::trunc);
	return 1;
}

std::string		Replace::GetStringFind(void) const {
	return this->_fstring;
}

int				Replace::SetStringFind(char const *& find) {
	std::string	fstring(find);

	if (fstring.length() == 0) {
		return -1;
	}
	this->_fstring = fstring;
	return 1;
}

std::string		Replace::GetStringReplace(void) const {
	return this->_rstring;
}

int				Replace::SetStringReplace(char const *& replace) {
	std::string	rstring(replace);

	if (rstring.length() == 0) {
		return -1;
	}
	this->_rstring = rstring;
	return 1;
}

void		Replace::ReplaceString(void) {

	if (!this->_ofile.is_open() || !this->_rfile.is_open()) {
		std::cout << "You need set files" << std::endl;
		return ;
	}

	std::string			buff;
	size_t				pos;
	std::stringstream	ss;

	ss << this->_ofile.rdbuf();
	buff = ss.str();

	pos = 0;
	while ((pos = buff.find(this->_fstring, pos)) != std::string::npos) {
		buff.replace(pos, this->_fstring.length(), this->_rstring);
		pos += this->_rstring.length();
	}
	this->_rfile << buff << std::endl;
	return ;
}

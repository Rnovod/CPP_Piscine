/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 14:25:42 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/02 14:25:43 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class	Pony
{

public:
	Pony();
	~Pony();

	int			GetPonnyWight(void);
	void		SetPonnyWight(int weight);

	std::string	GetPonnyColor(void);
	void		SetPonnyColor(std::string color);

	bool		GetPonnyStriped(void);
	void		SetPonnyStriped(bool striped);

private:
	int			weight;
	std::string	color;
	bool		striped;
};

#endif

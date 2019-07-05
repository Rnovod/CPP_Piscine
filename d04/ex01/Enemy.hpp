/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 16:28:14 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/05 16:28:15 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy {

	public:
		Enemy(void);
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & obj);
		Enemy & operator=(Enemy const & obj);
		virtual ~Enemy();

		std::string		getType() const;
		int				getHP() const;
		void			setHP(int const hp);
		virtual void	takeDamage(int);

	private:
		std::string	_type;
		int			_hp;

};

#endif

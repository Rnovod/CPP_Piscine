/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:51:33 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/04 14:51:34 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSANIMAL_HPP
# define CLASSANIMAL_HPP

#include <iostream>

class	Animal
{

	private:
		int		_numberOfLegs;

	public:
		Animal();
		Animal(Animal const &);
		Animal& operator=(Animal const &);
		~Animal();

		void	run(int distance);

};

class Cat : public Animal {

	public:
		Cat();
		Cat(Cat const &);
		Cat& operator=(Animal const &);
		~Cat();

		void	scornSomeone(std::string const & target);
}

class Pony : public Animal {

	public:
		Pony();
		Pony(Pony const &);
		Pony& operator=(Animal const &);
		~Pony();

		void	doMagic(std::string const & target);
}

#endif
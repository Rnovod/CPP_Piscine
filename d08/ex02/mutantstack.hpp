/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 19:38:27 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/12 19:38:28 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <list>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:

		typedef std::list<int>::iterator iterator;

		MutantStack<T>(void) {
			return ;
		}

		MutantStack(MutantStack const & obj) {
			static_cast<void>(obj);
			return ;
		}

		~MutantStack<T>(void) {
			return ;
		}

		MutantStack & operator=(MutantStack const & obj){
			static_cast<void>(obj);
			return ;
		}

		T	top(void) {
			return _stack.front();
		}

		T	size(void) {
			return _stack.size();
		}

		iterator	begin(void) {
			return _stack.begin();
		}

		iterator	end(void) {
			return _stack.end();
		}

		void	push(T value) {
			_stack.push_front(value);
			return ;
		}

		void	pop(void) {
			_stack.pop_front();
			return ;
		}

	private:
		std::list<T>	_stack;

};

#endif

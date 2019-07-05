/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 16:13:17 by rnovodra          #+#    #+#             */
/*   Updated: 2018/10/11 16:13:18 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include <exception>

template <typename T>
class	Array
{

	public:

		class	OutOfLimits : public std::exception
		{
			public:
				OutOfLimits(void)
				{
					return ;
				}

				OutOfLimits(OutOfLimits const & obj)
				{
					*this = obj;
					return ;
				}

				~OutOfLimits(void) throw()
				{
					return ;
				}

				OutOfLimits & operator=(OutOfLimits const & obj)
				{
					if (this != &obj) {
						std::exception::operator=(obj);
					}
					return *this;
				}

				const char *	what(void) const throw()
				{
					return "Out of limits";
				}
		};

		Array<T>(void) : _n(0)
		{
			_array = new T[0];
			std::cout << *_array << std::endl;
			return ;
		}

		Array<T>(unsigned int n) : _n(n)
		{
			_array = new T[n];
			char			*tmp;
			unsigned int	len;

			len = sizeof(T) * n;
			tmp = reinterpret_cast<char*>(_array);
			for (unsigned int i = 0; i < len; ++i)
			{
				tmp[i] = 0;
			}
			return ;
		}

		Array<T>(Array<T> const & obj)
		{
			*this = obj;
			return ;
		}

		~Array<T>(void)
		{
			if (this->_array)
			{
				delete [] this->_array;
			}
			return ;
		}

		Array<T> &	operator=(Array const & obj)
		{
			if (this != &obj)
			{
				_n = obj._n;
				if (_array)
				{
					delete [] _array;
				}
				_array = new T[_n];
				for (unsigned int i = 0; i < _n; ++i)
				{
					_array[i] = obj._array[i];
				}
			}
			return *this;
		}

		T &	operator[](unsigned int i) throw(OutOfLimits)
		{
			if (!_array || _n < i) {
				throw OutOfLimits();
			}
			return this->_array[i];
		}

		unsigned int	size(void) const
		{
			return _n;
		}

	private:
		unsigned int	_n;
		T				*_array;

};

#endif

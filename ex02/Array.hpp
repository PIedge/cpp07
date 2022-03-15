/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerrien <tmerrien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 21:36:09 by tmerrien          #+#    #+#             */
/*   Updated: 2022/03/15 01:35:50 by tmerrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template <typename T>
class Array
{
	public:
		Array<T>(void)
		{
			this->_n = 0;
			this->_data = 0;
		}

		~Array<T>(void)
		{
			if (this->_n == 0)
				return;
			delete[] this->_data;
			return;
		}

		Array<T>(unsigned int n)
		{
			this->_n = n;
			this->_data = new T[n];
		}

		Array<T>(Array<T> const &src)
		{
			this->_data = new T[src._n];
			this->_n = src._n;
			for (unsigned int i = 0; i < this->_n; i++)
				this->_data[i] = src._data[i];
		}

		Array<T> &operator=(Array<T> const &rhs)
		{
			this->_data = 0;
			this->_n = rhs._n;
			if (rhs._n)
			{
				if (this->_n > 0)
					delete[] this->_data;
				this->_data = new T[rhs._n];
			}
			for (unsigned int i = 0; i < this->_n; i++)
				this->_data[i] = rhs._data[i];
			return (*this);
		}
		
		T &operator[](unsigned int i)
		{
			if (i >= this->_n)
				throw OutOfBoundsException();
			return (this->_data[i]);
		}

		const T &operator[](unsigned int i) const
		{
			if (i >= this->_n)
				throw OutOfBoundsException();
			return (this->_data[i]);
		}

		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Index too big");
				}
		};

		unsigned int size(void) const
		{
			return (this->_n);
		}
		

	private:
		unsigned int _n;
		T *_data;
};

#endif
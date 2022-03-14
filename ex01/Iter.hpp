/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerrien <tmerrien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:57:26 by tmerrien          #+#    #+#             */
/*   Updated: 2022/03/15 00:17:14 by tmerrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void iter(T *tab, unsigned int size, void (*func)(T const &))
{
	unsigned int i;

	i = 0;
	if (size <= 0 || !tab || !func)
		return;
	while (i < size)
		func(tab[i++]);
}

// template <typename T>
// void iter(T *tab, unsigned int size, void (*func)(T &))
// {
// 	unsigned int i;

// 	i = 0;
// 	if (size <= 0 || !tab || !func)
// 		return;
// 	while (i < size)
// 		func(tab[i++]);
// }

#endif
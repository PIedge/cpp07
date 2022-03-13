/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerrien <tmerrien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:57:26 by tmerrien          #+#    #+#             */
/*   Updated: 2022/03/13 16:34:05 by tmerrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void iter(T *tab, int size, void (*func)(T const &))
{
	int i;

	i = 0;
	if (size <= 0)
		return;
	while (i < size)
		func(tab[i++]);
}

#endif
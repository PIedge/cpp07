/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerrien <tmerrien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:46:39 by tmerrien          #+#    #+#             */
/*   Updated: 2022/03/15 00:17:25 by tmerrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <iostream>

template <typename T>
void display(T const &a)
{
	std::cout << a << std::endl;
}

int main(void)
{
	int tab[2];
	float truc[2];

	tab[0] = 1;
	tab[1] = -10;
	truc[0] = 0.0f;
	truc[1] = 5.0f;
	std::cout << "Iter on tab" << std::endl;
	::iter(tab, 2, &display);
	// ::iter(tab, 2, &triple);
	// ::iter(tab, 2, &display);
	std::cout << "Iter on truc" << std::endl;
	::iter(truc, 2, &display);
	// ::iter(truc, 2, &triple);
	// ::iter(truc, 2, &display);
	return (0);
}

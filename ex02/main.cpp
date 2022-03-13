/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerrien <tmerrien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 21:32:52 by tmerrien          #+#    #+#             */
/*   Updated: 2022/03/13 20:37:18 by tmerrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
	Array<int> b(20);
	Array<int> a;

	const Array<int> w(10);

	// try
	// {
	// 	w[9] = 10;
	// 	std::cout << w[9] << std::endl;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	std::cout << w[1] << std::endl;
	
	std::cout << b.size() << std::endl;

	for (int i = 0; i < 20; i++)
	{
		b[i] = 1;
	}
	for (int i = 0; i < 20; i++)
	{
		std::cout << i << ": " << b[i] << std::endl;
	}
	try
	{
		b[20] = 2;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Array<int> c(b);
	c[1] = 2;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "b" << i << ": " << b[i] << std::endl;
		std::cout << "c" << i << ": " << c[i] << std::endl;
	}

	b = c;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "b" << i << ": " << b[i] << std::endl;
		std::cout << "c" << i << ": " << c[i] << std::endl;
	}

	return (0);
}
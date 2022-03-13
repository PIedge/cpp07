/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerrien <tmerrien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 21:32:52 by tmerrien          #+#    #+#             */
/*   Updated: 2022/03/13 16:17:33 by tmerrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
	Array<int> b(20);
	Array<int> a;
	
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 18:21:09 by busseven          #+#    #+#             */
/*   Updated: 2026/08/18 11:38:35 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"
#include <vector>
#include <stack>
#include <iostream>

void announce(int i)
{
	std::cout << "Finding " << i << std::endl;
}

int main(void)
{
	std::cout << "VECTOR TESTS" << std::endl;
	std::vector<int> v;
	for(int i = 0; i < 8; i++)
		v.push_back(i);
	try
	{
		announce(3);
		std::vector<int>::iterator found = easyfind(v, 3);
		std::cout << "Found " << *found << std::endl;
		announce(42);
		found = easyfind(v, 42);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
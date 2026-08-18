/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 18:21:09 by busseven          #+#    #+#             */
/*   Updated: 2026/08/18 10:56:49 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"
#include <vector>
#include <iostream>

int main(void)
{
	std::vector<int> v;
	for(int i = 0; i < 8; i++)
		v.push_back(i);
	try
	{
		std::vector<int>::iterator found = easyfind(v, 3);
		std::cout << *found << std::endl;
		found = easyfind(v, 42);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
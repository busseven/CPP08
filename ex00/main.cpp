/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 18:21:09 by busseven          #+#    #+#             */
/*   Updated: 2026/08/18 10:30:44 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"
#include <vector>

int main(void)
{
	std::vector<int> v1(8);
	std::vector<int>::iterator it = v1.begin();
	for(int i = 0; v1.at(i); i++)
		v1.insert(it++, i);
	try
	{
		
	}
	catch(std::exception)
	{
		
	}
}
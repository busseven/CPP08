/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 15:04:12 by busseven          #+#    #+#             */
/*   Updated: 2026/08/19 12:13:41 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iterator>
#include <iostream>
#include "exceptions.hpp"


template< typename T >
typename T::iterator	easyfind(T &cont, int i)
{
	typename T::iterator iter;

	iter = std::find(cont.begin(), cont.end(), i);
	if(iter == cont.end())
		throw NotFoundException();
	return(iter);
}

template< typename T >
void run_container_test(const std::string& testname, int fill_limit, int step, int target1, int target2)
{
	std::cout << testname << std::endl;
	T cont;
	for(int i = 0; i < fill_limit; i+=step)
		cont.push_back(i);
	std::cout << "Elements: ";
	typename T::const_iterator it = cont.begin();
	for(int i = 0; i < fill_limit && it != cont.end(); i+=step)
	{
		std::cout << *it << " ";
		std::advance(it, 1);
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Finding " << target1 << std::endl;
		typename T::iterator found = easyfind(cont, target1);
		std::cout << "Found " << *found << std::endl;
		std::cout << "Finding " << target2 << std::endl;
		found = easyfind(cont, target2);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
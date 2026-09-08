/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 18:21:09 by busseven          #+#    #+#             */
/*   Updated: 2026/09/08 13:41:51 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <stack>
#include <list>
#include <iostream>

int main(void)
{
	run_container_test<std::vector<int> >("VECTOR TESTS", 8, 1, 3, 42);
	std::cout << std::endl;
	run_container_test<std::deque<int> >("DEQUE TESTS", 80, 10, 30, 80);
	std::cout << std::endl;
	run_container_test<std::list<int> >("LIST TESTS", 10, 2, 8, 42);
	std::cout << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 09:46:37 by busseven          #+#    #+#             */
/*   Updated: 2026/08/21 09:14:19 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void test_aLotOfNumbers()
{
	Span sp = Span(200000);
	for(int i = 0; i < 200000; i++)
		sp.addNumber(i);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void test_longestSpan()
{
	Span sp = Span(10);
	sp.addNumber(11);
	sp.shortestSpan();
}

void test_shortestSpan()
{
	Span sp = Span(10);
	sp.addNumber(11);
	sp.shortestSpan();
}

void test_addNumber()
{
	Span sp = Span(3);
	sp.addNumber(-21);
	sp.addNumber(0);
	sp.addNumber(7);
	sp.addNumber(5);
}

int main()
{

	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	try
	{
		test_addNumber();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		test_shortestSpan();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		test_longestSpan();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		test_aLotOfNumbers();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
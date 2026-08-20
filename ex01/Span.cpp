/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 09:46:12 by busseven          #+#    #+#             */
/*   Updated: 2026/08/20 10:45:25 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

// Constructors
Span::Span()
{
	this->stored = 0;
}

Span::Span(unsigned int N)
{
	this->v.reserve(N);
	this->stored = 0;
}

Span::Span(const Span &copy)
{
	*this = copy;
}


// Destructor
Span::~Span()
{
	;
}


// Operators
Span & Span::operator=(const Span &assign)
{
	this->v.reserve(assign.v.capacity());
	this->v = assign.v;
	this->stored = 0;
	return *this;
}

const char *Span::CapacityExceededException::what() const throw()
{
	return ("Maximum storage exceeded");
}

const char *Span::NotEnoughNumbersException::what() const throw()
{
	return ("Not enough numbers to find span");
}

void Span::addNumber(int i)
{
	if(this->stored >= this->v.capacity())
		throw CapacityExceededException();
	this->v.push_back(i);
}

int Span::longestSpan()
{
	if(stored <= 1)
		throw NotEnoughNumbersException();
	
	std::vector<int> temp;
	int	span;
	temp = this->v;
	std::sort(temp.begin(), temp.end());
	span = *temp.end() - *temp.begin();
	return (span);
}

int Span::shortestSpan()
{
	if(stored <= 1)
		throw NotEnoughNumbersException();

	std::vector<int> temp;
	int	span;
	int n;
	n = 0;
	span = 0;
	temp = this->v;
	std::sort(temp.begin(), temp.end());

	for(int i = 1; i < this->v.capacity(); i++)
	{
		n = this->v[i] - this->v[i - 1];
		if(n < span)
			span = n;
	}
	return (span);
}
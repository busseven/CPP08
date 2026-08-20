/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 09:46:12 by busseven          #+#    #+#             */
/*   Updated: 2026/08/20 12:19:12 by busseven         ###   ########.fr       */
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
	this->stored = this->v.size();
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
	this->stored++;
}

void Span::addRange(int f, int l)
{
	if((l - f - 1) > (int)(this->v.capacity() - this->stored))
		throw CapacityExceededException();
	this->v.insert(this->v.end(), f, l);
}

int Span::longestSpan()
{
	if(stored <= 1)
		throw NotEnoughNumbersException();
	
	std::vector<int> temp;
	int	span;
	temp = this->v;
	std::sort(temp.begin(), temp.end());
	span = temp.back() - *temp.begin();
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
	temp = this->v;
	std::sort(temp.begin(), temp.end());
	span = temp[1] - temp[0];

	for(int i = 1; i < (int)this->stored; i++)
	{
		n = temp[i] - temp[i - 1];
		if(n < span)
			span = n;
	}
	return (span);
}
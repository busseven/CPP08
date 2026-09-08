/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 09:46:12 by busseven          #+#    #+#             */
/*   Updated: 2026/09/08 14:36:29 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

// Constructors
Span::Span()
{
	this->stored = 0;
	this->v.reserve(0);
}

Span::Span(unsigned int N)
{
	this->capacity = N;
	this->stored = 0;
	this->v.reserve(N);
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
	this->v.reserve(assign.getCapacity());
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
	if(this->stored >= this->capacity)
		throw CapacityExceededException();
	this->v.push_back(i);
	this->stored++;
}

void Span::addRange(int f, int l)
{
	if((l - f) > (int)(this->capacity - this->stored))
		throw CapacityExceededException();
	for(int i = f; i <= l; i++)
		this->v.push_back(i);
	stored = l - f + 1;
}

int Span::longestSpan() const
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

int Span::shortestSpan() const
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

unsigned int Span::getCapacity() const
{
	return(this->capacity);
}

unsigned int Span::getStored() const
{
	return(this->stored);
}

unsigned int Span::getIndex(int i) const
{
	return(this->v[i]);
}

std::ostream & operator<<(std::ostream &stream, const Span &object)
{
	for(unsigned int i = 0; i < object.getStored(); i++)
	{
		stream << object.getIndex(i);
		if(i == object.getStored() - 1)
			break ;
		stream << ",";
	}
	return(stream);
}
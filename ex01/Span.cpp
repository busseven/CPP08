#include "Span.hpp"

// Constructors
Span::Span()
{
	;
}

Span::Span(unsigned int N)
{
	this->v.reserve(N);
}

Span::Span(const Span &copy)
{
	*this = copy;
}


// Destructor
Span::~Span()
{
	std::cout << "\e[0;31mDestructor called of Span\e[0m" << std::endl;
}


// Operators
Span & Span::operator=(const Span &assign)
{
	this->v.reserve(assign.v.capacity());
	std::copy(assign.v.begin(), assign.v.end(), std::back_inserter(this->v));
	return *this;
}


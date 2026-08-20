#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{
	public:
		Span();
		Span(const Span &copy);
		~Span();

		Span & operator=(const Span &assign);
		void addNumber(int i);
		int shortestSpan();
		int longestSpan();
		
	private:
		std::vector<int> v;
};

#endif
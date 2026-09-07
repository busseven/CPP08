/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 09:46:16 by busseven          #+#    #+#             */
/*   Updated: 2026/09/07 12:53:07 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &copy);
		~Span();

		Span & operator=(const Span &assign);
		void addNumber(int i);
		void addRange(int f, int l);
		int shortestSpan() const;
		int longestSpan() const;
		unsigned int getCapacity() const;
		unsigned int getStored() const;
		unsigned int getIndex(int i) const;
		
	class CapacityExceededException : public std::exception 
	{
		virtual const char* what() const throw();
	};

	class NotEnoughNumbersException : public std::exception 
	{
		virtual const char* what() const throw();
	};
	private:
		std::vector<int> v;
		unsigned int stored;
		unsigned int capacity;
};

std::ostream & operator<<(std::ostream &stream, const Span &object);

#endif
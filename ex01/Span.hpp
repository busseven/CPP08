/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 09:46:16 by busseven          #+#    #+#             */
/*   Updated: 2026/08/20 10:59:22 by busseven         ###   ########.fr       */
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
		void insert_range(int f, int l);
		int shortestSpan();
		int longestSpan();
		
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
};

#endif
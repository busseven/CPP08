#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		// Constructors
		MutantStack();
		MutantStack(const MutantStack &copy);
		
		// Destructor
		~MutantStack();
		
		// Operators
		MutantStack & operator=(const MutantStack &assign);
		
	private:
		
};

#endif
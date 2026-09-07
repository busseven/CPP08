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

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{
	;
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack& copy)
{
	*this = copy;
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
	;
}

template <typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(const MutantStack &copy)
{
	std::stack<T, Container>::operator=(copy);
	return *this;
}

#endif
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

		typedef typename Container::iterator iterator;

		iterator begin() {return this->c.begin()};
		iterator end() {return this->c.end()};
		const_iterator begin() const {return this->c.begin()};
		const_iterator end() const {return this->c.end()};
		reverse_iterator rbegin() {return this->c.rbegin()};
		reverse_iterator rend() {return this->c.rend()};
		const_reverse_iterator rbegin() const {return this->c.rbegin()};
		const_reverse_iterator rend() const {return this->c.rend()};

		
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
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(MutantStack const& toCopy);
		~MutantStack(void);

		MutantStack const&	operator=(MutantStack const& toCopy);

		typedef typename std::stack<T>::container_type::iterator			iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;

		iterator			begin(void);
		iterator			end(void);
		reverse_iterator	rbegin(void);
		reverse_iterator	rend(void);
};

# include "MutantStack.tpp"

#endif

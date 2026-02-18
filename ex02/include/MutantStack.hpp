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

		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		iterator				begin(void);
		iterator				end(void);
		const_iterator			cbegin(void);
		const_iterator			cend(void);
		reverse_iterator		rbegin(void);
		reverse_iterator		rend(void);
		const_reverse_iterator	crbegin(void);
		const_reverse_iterator	cdrend(void);
};

# include "MutantStack.tpp"

#endif

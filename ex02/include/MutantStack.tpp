#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const& toCopy):
std::stack<T>(toCopy) {}

template <typename T>
MutantStack<T>::~MutantStack(void) {}

template <typename T>
MutantStack<T> const&	MutantStack<T>::operator=(MutantStack const& toCopy)
{
	std::stack<T>::operator=(toCopy);
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator			MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator			MutantStack<T>::end(void)
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin(void)
{
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend(void)
{
	return (this->c.rend());
}

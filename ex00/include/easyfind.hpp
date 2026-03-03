#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <class T>
typename T::iterator	easyfind(T& container, int toFind)
{
	return (find(container.begin(), container.end(), toFind));
}

#endif // EASYFIND_HPP

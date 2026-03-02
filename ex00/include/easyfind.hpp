#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template <class T>
typename T::iterator	easyfind(T& container, int toFind)
{
	typename T::iterator	it = container.begin();
	typename T::iterator	end = container.end();

	while (it < end)
	{
		if (*it == toFind)
			return (it);
		++it;
	}
	return (end);
}

#endif // EASYFIND_HPP

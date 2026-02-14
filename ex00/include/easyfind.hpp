#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template <typename T>
int	easyfind(T& container, int toFind)
{
	return (*container.std::find(container.std::begin(), container.std::end, toFind));
}

#endif // EASYFIND_HPP

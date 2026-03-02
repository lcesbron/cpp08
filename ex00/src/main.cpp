#include "easyfind.hpp"
#include <vector>
#include <iostream>

static void	test1(void)
{
	std::vector<int>	v;
	std::vector<int>::iterator it;

	for (int i = 0 ; i < 5; i++)
	{
		v.push_back(i);
	}
	it = easyfind(v, 7);
	if (it == v.end())
		std::cout << "Not found" << std::endl;
	else
		std::cout << *it << std::endl;
}

static void	test2(void)
{
	std::vector<int>	v;
	std::vector<int>::iterator it;

	for (int i = 0 ; i < 5; i++)
	{
		v.push_back(i);
	}
	it = easyfind(v, 3);
	if (it == v.end())
		std::cout << "Not found" << std::endl;
	else
		std::cout << *it << std::endl;
}

int	main(void)
{
	test1();
	test2();
}

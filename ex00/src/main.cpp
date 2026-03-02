#include "easyfind.hpp"
#include <vector>
#include <iostream>

static void	test1(void)
{
	std::vector<int>	v;

	for (int i = 0 ; i < 5; i++)
	{
		v.push_back(i);
	}
	std::cout << *easyfind(v, 7) << std::endl;
}

static void	test2(void)
{
	std::vector<int>	v;

	for (int i = 0 ; i < 5; i++)
	{
		v.push_back(i);
	}
	std::cout << *easyfind(v, 4) << std::endl;
}

int	main(void)
{
	test1();
	test2();
}

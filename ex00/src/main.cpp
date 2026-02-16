#include "easyfind.hpp"
#include <vector>
#include <iostream>

int	main(void)
{
	std::vector<int>	v;

	for (int i = 0 ; i < 5; i++)
	{
		v.push_back(i);
	}
	std::cout << *easyfind(v, 7) << std::endl;
}

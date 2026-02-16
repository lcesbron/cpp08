#include "Span.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

static void	printSpans(Span const& toPrint)
{
	std::cout << "Shortest : " << toPrint.shortestSpan() << std::endl;
	std::cout << "Longest : " << toPrint.longestSpan() << std::endl;
}

static void	test10(void)
{
	Span	s(10);

	for (int i = 0; i < 10; i++)
	{
		s.addNumber(std::rand() % 20);
	}
	s.print();
	std::cout << std::endl;
	printSpans(s);
}

int	main(void)
{
	std::srand(std::time(0));

	test10();
}

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
		s.addNumber(std::rand() % 10);
	}
	s.print();
	std::cout << std::endl;
	printSpans(s);
}

static void	test1000(void)
{
	Span	s(10000);

	for (int i = 0; i < 10000; i++)
	{
		s.addNumber(std::rand() % 1000000);
	}
	s.print();
	std::cout << std::endl;
	printSpans(s);
}

int	main(void)
{
	std::srand(std::time(0));

	test10();
	test1000();
}

#include "Span.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

static void printHeader(void)
{
	static unsigned int	testCounter = 1;

	std::cout << "----- TEST " << testCounter << " -----" << std::endl << std::endl;
	++testCounter;
}

static void	printSpans(Span const& toPrint)
{
	std::cout << "Shortest : " << toPrint.shortestSpan() << std::endl;
	std::cout << "Longest : " << toPrint.longestSpan() << std::endl;
}

static void testSubject(void)
{
	printHeader();

	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

static void	test10(void)
{
	printHeader();

	Span	s(10);

	for (int i = 0; i < 10; i++)
	{
		s.addNumber(std::rand() % 10);
	}
	s.print();
	std::cout << std::endl;
	printSpans(s);
}

static void	testException(void)
{
	printHeader();

	Span	s(10);

	try
	{
		for (int i = 0; i < 12; i++)
		{
			s.addNumber(std::rand() % 10);
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << "(expected)" << std::endl;
		return ;
	}
	s.print();
	std::cout << std::endl;
	printSpans(s);
}

static void	testException2(void)
{
	printHeader();

	Span	s(10);

	s.addNumber(std::rand() % 10);
	try
	{
		printSpans(s);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << "(expected)" << std::endl;
		return ;
	}
	s.print();
	std::cout << std::endl;
	printSpans(s);
}

static void	testRange(void)
{
	printHeader();

	std::multiset<int> v;
	v.insert(1);
	v.insert(3);
	v.insert(8);
	v.insert(42);
	Span sp = Span(4);
	sp.addRange(v.begin(), v.end());
	sp.print();
	std::cout << std::endl;
	printSpans(sp);
}

static void	testRangeException(void)
{
	printHeader();

	std::multiset<int> v;
	v.insert(1);
	v.insert(3);
	v.insert(8);
	v.insert(42);
	Span sp = Span(3);
	try
	{
		sp.addRange(v.begin(), v.end());
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << "(expected)" << std::endl;
		return ;
	}
	sp.print();
	std::cout << std::endl;
	printSpans(sp);
}
//static void	test1000(void)
//{
//	printHeader();
//
//	Span	s(10000);
//
//	for (int i = 0; i < 10000; i++)
//	{
//		s.addNumber(std::rand() % 1000000);
//	}
//	s.print();
//	std::cout << std::endl;
//	printSpans(s);
//}

int	main(void)
{
	std::srand(std::time(0));

	testSubject();
	test10();
	// test1000();
	testRange();
	testException();
	testException2();
	testRangeException();
}

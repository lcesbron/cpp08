#include "MutantStack.hpp"
#include <iostream>

static void	printTestHeader(std::string name)
{
	static unsigned int n = 1;

	std::cout << std::endl << "----------" << n << ' ' << name << " ----------" << std::endl;
	++n;
}

static void	subjectTest(void)
{
	printTestHeader("Subject Test");

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

static void iteratorTest(void)
{
	printTestHeader("Iterator Test");

	MutantStack<int>	mstack;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator	it1 = mstack.begin();
	while (it1 != mstack.end())
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
	MutantStack<int>::iterator	it2 = mstack.end();
	--it2;
	while (it2 != mstack.begin())
	{
		std::cout << *it2 << std::endl;
		--it2;
	}
	std::cout << std::endl;
}

static void reverseIteratorTest(void)
{
	printTestHeader("Reverse Iterator Test");

	MutantStack<int>	mstack;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::reverse_iterator	it1 = mstack.rbegin();
	while (it1 != mstack.rend())
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
	MutantStack<int>::reverse_iterator	it2 = mstack.rend();
	--it2;
	while (it2 != mstack.rbegin())
	{
		std::cout << *it2 << std::endl;
		--it2;
	}
	std::cout << std::endl;
}

int main()
{
	subjectTest();
	iteratorTest();
	reverseIteratorTest();
}

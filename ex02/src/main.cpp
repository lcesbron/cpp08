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
	return 0 ;
}

static void iteratorTest(void)
{
	printTestHeader("Iterator Test");

	MutantStack<int>	s;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator	it1 = s.begin();
	while (s != s.end())
	{
		std::cout << *s;
		++s;
	}
	MutantStack<int>::iterator	it2 = s.end();
	while (s != s.begin())
	{
		std::cout << *s;
		--s;
	}
	std::cout << std::endl;
}

int main()
{
	subjectTest();
	iteratorTest();
}

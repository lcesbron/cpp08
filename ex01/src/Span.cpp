#include "Span.hpp"
#include <iostream>

Span::Span(void):
N_(DEFAULT_SPAM_ELEMS) {}

Span::Span(unsigned int N):
N_(N) {}

Span::Span(Span const& toCopy):
N_(toCopy.N_),
storage_(toCopy.storage_) {}

Span::~Span() {}

Span&	Span::operator=(Span const& toCopy)
{
	this->N_ = toCopy.N_;
	this->storage_.clear();
	this->storage_ = toCopy.storage_;
	return (*this);
}

void	Span::addNumber(int number)
{
	if (this->storage_.size() == this->N_)
		throw tooManyNumbersException();
	this->storage_.insert(number);
}

void	Span::addRange(std::multiset<int>::iterator const& begin, std::multiset<int>::iterator const& end)
{
	if (this->storage_.size() + std::distance(begin, end) > this->N_)
		throw tooManyNumbersException();
	this->storage_.insert(begin, end);
}

unsigned int	Span::shortestSpan(void) const
{
	unsigned int					min_span = this->longestSpan();
	unsigned int					current_span;
	std::multiset<int>::iterator	it = this->storage_.begin();
	std::multiset<int>::iterator	next = it;

	++next;
	while (next != this->storage_.end())
	{
		current_span = *next - *it;
		if (current_span < min_span)
			min_span = current_span;
		++it;
		++next;
	}
	return (min_span);
}

unsigned int	Span::longestSpan(void) const
{
	if (this->storage_.size() < 2)
	{
		throw notEnoughNumbersException();
	}
	return (*--this->storage_.end() - *this->storage_.begin());
}

void	Span::print(void) const
{
	std::multiset<int>::iterator	it = this->storage_.begin();
	std::multiset<int>::iterator	end = --this->storage_.end();

	while (it != end)
	{
		std::cout << *it << ' ';
		++it;
	}
	std::cout << *it;
}

char const* Span::tooManyNumbersException::what(void) const throw()
{
	return ("The span is already full. You can't add any more numbers.");
}

char const* Span::notEnoughNumbersException::what(void) const throw()
{
	return ("There isn't enough numbers to compute a span. (needs at least 2)");
}

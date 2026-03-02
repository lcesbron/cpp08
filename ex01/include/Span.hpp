#ifndef SPAN_HPP
# define SPAN_HPP

#include <exception>
#include <functional>
#include <memory>
#include <set>
# include <vector>

# define DEFAULT_SPAM_ELEMS 10

class Span
{
	private:
		unsigned int		N_;
		std::multiset<int>	storage_;
	public:
		Span(void);
		Span(unsigned int N);
		Span(Span const& toCopy);
		~Span(void);

		Span& operator=(Span const& toCopy);

		void	addNumber(int number);
		void	addRange(std::multiset<int>::iterator const& begin, std::multiset<int>::iterator const& end);

		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;

		void			print(void) const;

		class tooManyNumbersException: public std::exception
		{
			public:
				virtual char const*	what(void) const throw();
		};
		class notEnoughNumbersException: public std::exception
		{
			public:
				virtual char const*	what(void) const throw();
		};
};

#endif

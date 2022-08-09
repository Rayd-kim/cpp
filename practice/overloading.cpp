#include <iostream>
#include <string>

class	Test {
	private:
		int	a;
		std::string	name;

	public:
		Test(int a, std::string name);
		~Test();
		int	operator+(const Test& test);
		bool	operator==(const Test &test);
};

Test::Test(int a, std::string name) : a(a), name(name)
{}

Test::~Test(void)
{
	std::cout << a << "end : " << name << std::endl;
}

int	Test::operator+(const Test &test)
{
	return (a + test.a);
}

bool	Test::operator==(const Test &test)
{
	if (a == test.a)
		return (true);
	else
		return (false);
}

int	main(void)
{
	Test	a(10, "A");
	Test	b = a;

	std::cout << a + b << std::endl;
}
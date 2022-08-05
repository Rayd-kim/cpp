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

int	main(void)
{
	Test	a(10, "A");
	Test	b = a;
	// Test	b (20, "B");

	std::cout << a + b << std::endl;
}
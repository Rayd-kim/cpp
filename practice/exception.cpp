
#include <iostream>
#include <string>

class	Exception
{
	private:
		int	grade;

	public:
		char	*name;
		Exception(int _grade);
		~Exception();

};

Exception::Exception(int _grade)
{
	name = new char[10];

	if (_grade <= 0)
	{
		// delete name;
		throw (*this);
	}
	grade = _grade;
	std::cout << grade << " is constructed" << std::endl;

}

Exception::~Exception()
{
	delete[] name;
	std::cout << grade <<"destructed" << std::endl;
}

int	main(void)
{

	try
	{
		Exception	e(4);
		Exception	a(-1);
	}
	catch (int a)
	{
		// delete e.name;
	}
	catch(Exception &e)
	{
		std::cout << e.name << std::endl;
	}
	return (0);
}
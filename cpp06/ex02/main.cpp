#include <iostream>

class	Base
{
	public:
		virtual	~Base()
		{
			std::cout << "Base" << std::endl;
		};
};

class	A : public Base
{
	public:
		~A()
		{
			std::cout << "A" << std::endl;
		};
};

class	B : public Base
{
	public:
		~B()
		{
			std::cout << "B" << std::endl;
		};
};

class	C : public Base
{
	public:
		~C()
		{
			std::cout << "C" << std::endl;
		};
};


void	identify(Base* p)
{
	try
	{
		A *a = dynamic_cast<A*>(p);
		if (a == nullptr)
			throw(1);
		std::cout << "P is A" << std::endl;
	}
	catch(...)
	{
		try
		{
			B *b = dynamic_cast<B*>(p);
			if (b == nullptr)
				throw(1);
			std::cout << "P is B" << std::endl;
		}
		catch(...)
		{
			std::cout << "P is C" << std::endl;
		}
	}
}

int	main(void)
{
	Base *base = new C();

	identify(base);
	delete base;
	return (0);
}
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

Base	*generate(void)
{
	srand(time(NULL));

	if (rand() % 3 == 1)
		return (new A);
	else if (rand() % 3 == 2)
		return (new B);
	else
		return (new C);
}

void	identify(Base* p)
{
	try
	{
		A *a = dynamic_cast<A*>(p);
		if (a == 0)
			throw(1);
		std::cout << "P is A" << std::endl;
	}
	catch(...)
	{
		try
		{
			B *b = dynamic_cast<B*>(p);
			if (b == 0)
				throw(1);
			std::cout << "P is B" << std::endl;
		}
		catch(...)
		{
			std::cout << "P is C" << std::endl;
		}
	}
}

void	identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "P is A" << std::endl;
		a.~A();
	}
	catch(...)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			std::cout << "P is B" << std::endl;
			b.~B();
		}
		catch(...)
		{
			std::cout << "P is C" << std::endl;
		}
	}
}

int	main(void)
{
	Base *base = generate();

	identify(base);
	identify(*base);
	delete base;
	return (0);
}
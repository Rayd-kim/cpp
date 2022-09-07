#include <iostream>

typedef	struct s_Data
{
	int	a;
	int	b;
	int	c;
}		Data;

int	main(void)
{
	int	t = 4;
	uintptr_t	a = (uintptr_t)&t;
	Data		*b;


	std::cout << a << std::endl;
	std::cout << &a << std::endl;
	std::cout << &t << std::endl;
	std::cout << sizeof(t) << std::endl;
	std::cout << sizeof(a) << std::endl;
	std::cout << sizeof(b) << std::endl;
}

// uintptr_t	serialize(Data* ptr)
// {

// }

// Data*	deserialize(uintptr_t raw)
// {

// }
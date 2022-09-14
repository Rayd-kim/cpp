#include "Base.hpp"
#include "function.hpp"

int	main(void)
{
	Base *base = generate();

	identify(base);
	identify(*base);
	delete base;
	return (0);
}
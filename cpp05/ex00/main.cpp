#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	a("A", 1);
		std::cout << a << std::endl;
		// std::cout << "name : " << a.getName() << std::endl;
		// std::cout << "grade : " << a.getGrade() << std::endl;

		Bureaucrat	b("B", 3);
		// b = a;
		std::cout << b << std::endl;
		// std::cout << "name : " << b.getName() << std::endl;
		// std::cout << "grade : " << b.getGrade() << std::endl;

		b.grade_up();
		std::cout << b << std::endl;
		b.grade_up();
		std::cout << b << std::endl;

		a.grade_up();
		std::cout << a << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
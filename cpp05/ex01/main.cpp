#include "Bureaucrat.hpp"
#include "Form.hpp"

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

		Form	form1("first", 1, 1);
		Form	form2("second", 3, 3);

		// a.signForm(form1);
		// a.signForm(form2);
		b.signForm(form1);
		b.signForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
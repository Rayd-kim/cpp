#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	a("A", 130);
		Bureaucrat	b("B", 130);

		std::cout << a << std::endl;
		std::cout << b << std::endl;

		ShrubberyCreationForm	form1("first");
		ShrubberyCreationForm	form2("second");

		a.signForm(form1);
		a.signForm(form2);
		b.signForm(form1);
		b.signForm(form2);

		a.executeForm(form1);
		b.executeForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
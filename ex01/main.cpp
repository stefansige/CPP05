#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat("bureaucrat", 1);
		Form form("FORMULIS", 1, 1);
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

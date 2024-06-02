#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat bureaucrat("Bureaucrat", 1);
	PresidentialPardonForm presidentialPardonForm("PresidentialPardonForm");
	RobotomyRequestForm robotomyRequestForm("RobotomyRequestForm");
	ShrubberyCreationForm shrubberyCreationForm("ShrubberyCreationForm");

	std::cout << bureaucrat << std::endl;
	std::cout << presidentialPardonForm << std::endl;
	std::cout << robotomyRequestForm << std::endl;
	std::cout << shrubberyCreationForm << std::endl;

	try
	{
		presidentialPardonForm.beSigned(bureaucrat);
		robotomyRequestForm.beSigned(bureaucrat);
		shrubberyCreationForm.beSigned(bureaucrat);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		presidentialPardonForm.execute(bureaucrat);
		robotomyRequestForm.execute(bureaucrat);
		shrubberyCreationForm.execute(bureaucrat);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

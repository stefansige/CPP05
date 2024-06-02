#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat p("President", 1);
	Bureaucrat m("Minister", 45);
	Bureaucrat l("Lawyer", 72);
	Bureaucrat s("Secretary", 145);

	Intern intern;

	Form *form;
	form = intern.makeForm("lap dance", "Criminal");
	form = intern.makeForm("presidential pardon", "Criminal");
	try{
	m.signForm(*form);
	m.executeForm(*form);
	p.signForm(*form);
	p.executeForm(*form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	delete form;
	form = intern.makeForm("robotomy request", "Robot");
	try
	{
	form->beSigned(l);
	form->execute(l);
	form->execute(m);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	delete form;
	form = intern.makeForm("shrubbery creation", "Tree");
	try
	{
	form->beSigned(s);
	form->execute(l);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	delete form;
	return 0;
}

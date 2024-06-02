#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &i)
{
	(void)i;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &i)
{
	(void)i;
	return (*this);
}

Form *Intern::makeForm(std::string formName, std::string target)
{
	int i;
	for (i = 0; i < 3; i++)
	{
		if (formName == "presidential pardon" || formName == "robotomy request" || formName == "shrubbery creation")
			break;
	}
	switch (i)
	{
	case 0:
		std::cout << "Intern creates " << formName << std::endl;
		return (new PresidentialPardonForm(target));
		break;
	case 1:
		std::cout << "Intern creates " << formName << std::endl;
		return (new RobotomyRequestForm(target));
		break;
	case 2:
		std::cout << "Intern creates " << formName << std::endl;
		return (new ShrubberyCreationForm(target));
		break;
	}
	std::cout << "Intern cannot create " << formName << std::endl;
	return (NULL);
}

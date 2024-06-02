#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &i);
	~Intern();
	Intern &operator=(const Intern &i);

	Form *makeForm(std::string formName, std::string target);
};

#endif

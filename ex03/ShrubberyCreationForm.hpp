#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &assign);
	~ShrubberyCreationForm();

	void execute(Bureaucrat const &executor) const;
};

#endif

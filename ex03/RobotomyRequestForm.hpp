#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string _target;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &assign);
	~RobotomyRequestForm();

	void execute(Bureaucrat const &executor) const;
};

#endif

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string _target;
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &assign);
	~PresidentialPardonForm();

	void execute(Bureaucrat const &executor) const;
};

#endif

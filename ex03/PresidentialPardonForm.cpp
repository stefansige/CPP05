#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy), _target(copy._target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	if (this != &assign)
		_target = assign._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!getSigned())
		throw Form::notSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw Bureaucrat::GradeTooLowException();
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

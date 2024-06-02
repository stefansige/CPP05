#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy), _target(copy._target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	if (this != &assign)
		_target = assign._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!getSigned())
		throw Form::notSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw Bureaucrat::GradeTooLowException();
	std::cout << "*drilling noises* ";
	if (rand() % 2)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << _target << " robotomization failed" << std::endl;
}

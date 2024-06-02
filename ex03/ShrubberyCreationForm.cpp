#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy), _target(copy._target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	if (this != &assign)
		_target = assign._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!getSigned())
		throw Form::notSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw Bureaucrat::GradeTooLowException();
	std::ofstream file((_target + "_shrubbery").c_str());
	if (!file.is_open())
		throw std::runtime_error("Error opening file");
	file << "      /\\      \n"
			"     /\\*\\     \n"
			"    /\\O\\*\\    \n"
			"   /*/\\/\\/\\   \n"
			"  /\\O\\/\\*\\/\\  \n"
			" /\\*\\/\\*\\/\\/\\ \n"
			"/\\O\\/\\/*/\\/O/\\\n"
			"      ||      \n"
			"      ||      \n"
			"      ||      \n";
	file.close();
}

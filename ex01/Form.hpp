#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string _name;
	bool _signed;
	const int _gradeToSign;
	const int _gradeToExecute;

public:
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(const Form &copy);
	Form &operator=(const Form &assign);
	~Form();

	std::string getName() const;
	bool getSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	void beSigned(Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif

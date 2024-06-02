#ifndef BUERAUCRAT_HPP
#define BUERAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &bureaucrat);
	~Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &bureaucrat);
	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif

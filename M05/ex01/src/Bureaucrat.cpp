/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-khay <del-khay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:27:51 by del-khay          #+#    #+#             */
/*   Updated: 2023/04/13 05:30:10 by del-khay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
/*                  constuctor/destructor           */

Bureaucrat::Bureaucrat(void):name("keven"), grade(150)
{
    std::cout << "Default constructor is called." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other): name(other.getName())
{
    std::cout << "Copy constructor is called." << std::endl;
    *this = other;
}

Bureaucrat::Bureaucrat(const std::string &id,  const int  &rank):name(id)
{
    std::cout << "Parameterized constructor is called." << std::endl;
    if (rank < 1)
        throw GradeTooHighException();
    else if (rank > 150)
        throw GradeTooLowException();
    this->grade = rank;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Default destructor is called." << std::endl;
}


/*                  getter/setter               */
std::string      Bureaucrat::getName(void) const
{
    return(this->name);
}

unsigned short Bureaucrat::getGrade(void) const
{
    return(this->grade);
}

/*                  member Funcs */
void    Bureaucrat::demote(void)
{
    if (this->grade + 1 > 150)
        throw GradeTooLowException();
    this->grade++;
}

void    Bureaucrat::promote(void)
{
    if(this->grade - 1 < 1)
        throw GradeTooHighException();
    this->grade--;
}

void    Bureaucrat::signForm(Form& paper_work)
{
    if (!paper_work.getSign()){
        try {
            paper_work.BeSigned(*this);
            std::cout << this->getName()
                << " signed " << paper_work.getFormName() << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << this->getName()
                << " couldn’t sign " << paper_work.getFormName()
                << " because " << e.what() << std::endl; 
        }
    }
    else {
        std::cout << this->getName()
            << " couldn’t sign " << paper_work.getFormName()
            << " because it's already signed" << std::endl; 
    }
}

/*               operator overload                      */

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
        this->grade = other.getGrade();
    return(*this);
}

std::ostream& operator<<(std::ostream& stream ,const Bureaucrat& employee)
{
    stream << employee.getName() << ", bureaucrat grade " << employee.getGrade() ;
    return stream;
}

/*        custom exception          */

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

const  char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}
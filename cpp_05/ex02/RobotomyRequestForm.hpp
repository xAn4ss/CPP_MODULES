#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "cstdlib"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& copied);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& rval);
        ~RobotomyRequestForm();

        std::string getTarget() const;

        void execute(Bureaucrat const & executor) const; 
};

#endif
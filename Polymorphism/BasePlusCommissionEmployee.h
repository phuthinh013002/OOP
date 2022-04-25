#ifndef BASEPLUS_H
#define BASEPLUS_H
#include "CommissionEmployee.h"
#include <string>

class BasePlusCommissionEmployee : public CommissionEmployee//Devired Class
{
    protected:
        double baseSalary;
    public:
        BasePlusCommissionEmployee(const std::string &, const std::string &, const std::string &, double = 0.0, double = 0.0, double = 0.0);
        void setbaseSalary(double);
        double getbaseSalary();

        virtual double earnings();
        virtual void print();
        // virtual ~BasePlusCommissionEmployee();
};

#endif
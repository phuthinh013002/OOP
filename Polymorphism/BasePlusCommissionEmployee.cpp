#include <iostream>
#include "BasePlusCommissionEmployee.h"

using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &first, const string &last, const string &social, double sales, double rate, double baseSal)
{
    firstname = first;
    lastname = last;
    socialNumber = social;
    grossSales = sales;
    commisstionRate = rate;
    baseSalary = baseSal;
}
void BasePlusCommissionEmployee::setbaseSalary(double baseSal)
{
    baseSalary = baseSal;
}
double BasePlusCommissionEmployee::getbaseSalary()
{
    return baseSalary;
}
double BasePlusCommissionEmployee::earnings()
{
    return (baseSalary + commisstionRate * grossSales);
}
void BasePlusCommissionEmployee::print()
{
    cout << "Base-salaried commission employee: " << firstname << ' '
    << lastname << "\nSocial security number: " << socialNumber
    << "\nGross sales: " << grossSales
    << "\nCommission rate: " << commisstionRate
    << "\nBase salary: " << baseSalary;
}
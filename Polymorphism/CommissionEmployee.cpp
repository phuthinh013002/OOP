#include <iostream>
#include "CommissionEmployee.h"

// using namespace std;

CommissionEmployee::CommissionEmployee(const string &first, const string &last, const string &social, double sales, double rate)
{
    firstname = first;
    lastname = last;
    socialNumber = social;
    grossSales = sales;
    commisstionRate = rate;
}

void CommissionEmployee::setFirstName(const string &first)
{
    firstname = first;
}
string CommissionEmployee::getFirstName()
{
    return (firstname);
}
void CommissionEmployee::setLastName(const string &last)
{
    lastname = last;
}
string CommissionEmployee::getLastName()
{
    return lastname;
}
void CommissionEmployee::setsocialNumber(const string &social)
{
    socialNumber = social;
}
string CommissionEmployee::getsocialNumber()
{
    return socialNumber;
}
void CommissionEmployee::setGrossSales(double sales)
{
    grossSales = sales;
}
double CommissionEmployee::getGrossSales()
{
    return grossSales;
}
void CommissionEmployee::setCommisstionRate(double rate)
{
    commisstionRate = rate;
}
double CommissionEmployee::getCommisstionRate()
{
    return commisstionRate;
}
double CommissionEmployee::earnings()
{
    return commisstionRate*grossSales;
}
void CommissionEmployee::print()
{
    cout << "Commission employee: " << firstname << ' ' << lastname
    << "\nSocial security number: " << socialNumber
    << "\nGross sales: " << grossSales
    << "\nCommission rate: " << commisstionRate << endl;
}
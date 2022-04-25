#ifndef COMMISSION_H
#define COMMISSION_H
using namespace std;
class CommissionEmployee //Base Class
{
    protected:
        string firstname;
        string lastname;
        string socialNumber;
        double grossSales;
        double commisstionRate;
    public:
        CommissionEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0);
        void setFirstName(const string &);
        string getLastName();
        void setLastName(const string &);
        string getFirstName();
        void setsocialNumber(const string &);
        string getsocialNumber();
        void setGrossSales(double);
        double getGrossSales();
        void setCommisstionRate(double);
        double getCommisstionRate();

        virtual double earnings();
        virtual void print();
        // virtual ~CommissionEmployee();
};

#endif
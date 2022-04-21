/*
=====> INHERITANCE <=====
Import & Export information of Employees:
+ production employee: name, number, date of birth, address, number of product
+ daily employee: number, date of birth, address, number of day
+ management employee: number, date of birth, address, number of salary
*/
#include <iostream>
#include <cstring>
using namespace std;

class infoEmployee
{
    private:
        
    public:
        char name[20];
        int number;
        char dateOfBirth[10];
        char address[20];
        void infoInput(char* na, int num, char* dB, char* ad)
        {
            strcpy(this->name, na);
            this->number = num;
            strcpy(this->dateOfBirth, dB);
            strcpy(this->address, ad);        
        }
        void infoOutput()
        {
            cout << "The name of Employee is: " << name << endl;
            cout << "The number of Employee is: " << number << endl;
            cout << "The dateOfBirth of Employee is: " << dateOfBirth << endl;
            cout << "The address of Employee is: " << address << endl;
        }
};

class productEmp : public infoEmployee
{
    private:
        int numProduct;
    public:
        void inputProduct(int numProduct)
        {
            this->numProduct = numProduct;
        }
        void outputProduct()
        {
            cout << "The number of Product is: " << numProduct << endl;
        }
};

class dailyEmp : public infoEmployee
{
    private:
        int numDay;
    public:
        void inputDay(int numDay)
        {
            this->numDay = numDay;
        }
        void outputDay()
        {
            cout << "The number of Day is: " << numDay << endl;
        }      
};

class manageEmp : public infoEmployee
{
    private:
        int numSalary;
    public:
        void inputSalary(int numSalary)
        {
            this->numSalary = numSalary;
        }
        void outputDay()
        {
            cout << "The number of Salary is: " << numSalary << endl;
        }  
};

int main()
{
    char *name = new char [20]; strcpy(name, "Heo");
    char *dateOfBirth = new char [10]; strcpy(dateOfBirth, "06/06/99");
    char *address = new char [20]; strcpy(address, "Lao");
    productEmp emp1;
    emp1.infoInput(name,23,dateOfBirth,address);
    emp1.inputProduct(100);
    emp1.infoOutput();
    emp1.outputProduct();
    return 0;
}
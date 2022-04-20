//Create Friend class is function to export number of student & professer

#include <iostream>
using namespace std;
class professer;
class student
{
    private:
        string *name;
        int age;
        
    public:
        string numberSV;
        student()
        {
            this->name[0] = '\0';
            this->age;
            this->numberSV = "11111111";
        }
        ~student()
        {
            this->name;
            this->age;
            this->numberSV = "";
        }
        void setNumberStd()
        {
            cout << "Enter number of student: ";
            fflush(stdin); getline(cin, this->numberSV);
        }
        friend void setNumber(student a, professer b);
};
class professer
{
    private:
        string *name;
        int age;
        
    public:
        string numberGV;
        professer()
        {
            this->name[0] = '\0';
            this->age = 0;
            this->numberGV = "11111111";
        }
        ~professer()
        {
            this->name;
            this->age;
            this->numberGV = "";
        }
        void setNumberPro()
        {
            cout << "Enter number of professer: ";
            fflush(stdin); getline(cin, this->numberGV);
        }
        friend void getNumber(student a, professer b);
};



void getNumber(student a, professer b)
{
    cout << "Number of student is: " << a.numberSV << endl;
    cout << "Number of professer is: " << b.numberGV << endl;
}

int main()
{
    student stdA;
    professer pfsA;
    stdA.setNumberStd();
    pfsA.setNumberPro();
    getNumber(stdA, pfsA);
    return 0;
}
//con heo
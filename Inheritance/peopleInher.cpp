#include <iostream>
#include <cstring>
using namespace std;

class People
{
    private:
        string name;
        int age;
        string address;
    public:
        People()
        {
            name = address = "";
            age = 0;
        }
        ~People(){}
        void infoSet() 
        {
            cout << "Enter the name: "; fflush(stdin); getline(cin, this->name);
            cout << "Enter the age: "; cin >> age;
            cout << "Enter the address: "; fflush(stdin); getline(cin, this->address);
        }
        void infoGet() const
        {
            cout << "Name is " << name << endl;
            cout << "Age is " << age << endl;
            cout << "Address is " << address << endl;
        }
};

class Students : public People
{
    private:
        string id;
        float math;
        float physical;
        float chemistry;
    public:
        void infoSet()
        {
            People::infoSet();
            cout << "Enter the ID: "; fflush(stdin); getline(cin, this->id);
            cout << "Enter the math: "; cin >> math;
            cout << "Enter the physical: "; cin >> physical;
            cout << "Enter the chemistry: "; cin >> chemistry;
        }
        void infoGet()
        {
            People::infoGet();
            cout << "ID is " << this->id << endl;
            cout << "Math point is " << this->math << endl;
            cout << "Physical point is " << this->physical << endl;
            cout << "Chemistry point is " << this->chemistry << endl;
        }
        float GPA() 
        {
            return ((math + physical + chemistry)/3);
        }
};

int main()
{
    Students std1;
    std1.infoSet();
    cout << "======> Inform Receive <======" << endl;
    std1.infoGet();
    cout << "GPA is " << std1.GPA() << endl;

    return 0;
}
/* 
======> OPERATOR OVERLOARDING <=====
0. Import/Export and calculate with fractions
1. Overloading for input/output
2. Overloading for + - * /
*/
#include <iostream>
#include <fstream>
using namespace std;

class phanso
{
    private: 
        int nume;
        int demo;
    public: 
        phanso()
        {
            nume = 0;
            demo = 1;
        }
        ~phanso()
        {
            nume = 0;
            demo = 1;
        }
        friend istream& operator >> (istream& istr, phanso &phs)
        {
            cout << "Input the nume: "; 
            istr >> phs.nume;
            cout << "Input the demo: "; 
            istr >> phs.demo;
            return istr;
        }

        friend ostream& operator << (ostream& ostr, phanso phs)
        {
            ostr << phs.nume << "/" << phs.demo << endl;
            return ostr;
        }
        friend phanso operator + (phanso object1, phanso object2)
        {
            phanso object3;
            object3.nume = object1.nume*object2.demo + object1.demo*object2.nume;
            object3.demo = object1.demo*object2.demo;
            return object3;
        }
        friend phanso operator - (phanso object1, phanso object2)
        {
            phanso object3;
            object3.nume = object1.nume*object2.demo - object1.demo*object2.nume;
            object3.demo = object1.demo*object2.demo;
            return object3;
        }
        friend phanso operator * (phanso object1, phanso object2)
        {
            phanso object3;
            object3.nume = object1.nume*object2.nume;
            object3.demo = object1.demo*object2.demo;
            return object3;
        }
        friend phanso operator / (phanso object1, phanso object2)
        {
            phanso object3;
            object3.nume = object1.nume*object2.demo;
            object3.demo = object1.demo*object2.nume;
            return object3;
        }
};

int main()
{
    phanso obj1, obj2, obj3;
    cin >> obj1;
    cin >> obj2;
    obj3 = obj1 + obj2;
    cout << "Sum is " << obj3 << endl;
    obj3 = obj1 - obj2;
    cout << "Sub is " << obj3 << endl;
    obj3 = obj1 * obj2; 
    cout << "Mul is " << obj3 << endl;
    obj3 = obj1 / obj2;
    cout << "Div is " << obj3 << endl;
    return 0;
}
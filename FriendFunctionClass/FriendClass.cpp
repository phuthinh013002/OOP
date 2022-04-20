/*
0. Set name, age, address of the Dog
1. Print/Get name, age, address of the Dog
2. You can know info of the Dog'Friend
3. Print/Get name, age, address of the Dog'Friend
===> Using Friend class
*/
#include <iostream>
#include <cstring>
using namespace std;

class infoFriendOfDog;
class infoDog
{
    friend class infoFriendOfDog
;
    private:
        char name[20];
        int age;
        char address[20];
    public:
        infoDog()
        {
            this->name[0] = '\0';
            this->age = 0;
            this->address[0] = '\0';
        }
        ~infoDog()
        {
            this->name[0] = '\0';
            this->age = 0;
            this->address[0] = '\0';
        }
        void setinfoDog(const char *, int , const char *);
        void getinfoDog(void);
};

void infoDog::setinfoDog(const char *na, int ag, const char *ad)
{
    strcpy(this->name, na);
    this->age = ag;
    strcpy(this->address, ad);
}

void infoDog::getinfoDog()
{
    cout << "Information of your Dog" << endl;
    cout << "Name: " << this->name << endl;
    cout << "Age: " << this->age <<endl;
    cout << "Address " << this->address << endl;
}

class infoFriendOfDog
{
    private:
        char name[20];
        int age;
        char address[20];
    public:
        void setinfoFriendOfDog(infoDog *);
        void getinfoFriendOfDog(void);;
};

void infoFriendOfDog::setinfoFriendOfDog(infoDog *theDog)
{
    strcpy(this->name, theDog->name);
    strcat(this->name, (char*)"'Friend");
    this->age = theDog->age;
    strcpy(this->address, theDog->address);
}

void infoFriendOfDog::getinfoFriendOfDog()
{
    cout << "Information of the Dog'Friend" << endl;
    cout << "Name: " << this->name << endl;
    cout << "Age: " << this->age << endl;
    cout << "Address " << this->address << endl;
}

int main ()
{
    char *name = new char [20];
    strcpy(name,"Con Heo");
    char *address = new char [20];
    strcpy(address, "Lao");
    infoDog myDog;
    infoFriendOfDog FriendOfDog;
    myDog.setinfoDog(name, 3, address);
    myDog.getinfoDog();
    FriendOfDog.setinfoFriendOfDog(&myDog);
    FriendOfDog.getinfoFriendOfDog();
    return 0;   
}
//1234
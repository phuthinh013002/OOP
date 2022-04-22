/*
======> INHERITANCE <======
Import & Export information of Color, Point or Pixel:
+ Color: name color, code color
+ Point: value x, value y
+ Pixel: name color, code color, value x, value y
Link: https://nguyenvanhieu.vn/bai-tap-cpp-ve-tinh-ke-thua/#bai-tap-2
*/
#include <iostream>
#include <fstream>
using namespace std;

class Color
{
    protected:
        string nameColor;
        string codeColor;
    public:
        Color()
        {
            nameColor = codeColor = "";
        }
        ~Color()
        {
            nameColor = codeColor = "";
        }
        friend istream& operator >> (istream& is, Color& col)
        {
            cout << "Enter the name of Color: ";
            is >> col.nameColor;
            cout << "Enter the code of Color: ";
            is >> col.codeColor;
            return is;
        }
        friend ostream& operator << (ostream& os, Color col)
        {
            os << "Name of Color: " << col.nameColor << endl;
            os << "Code of Color: " << col.codeColor << endl;
            return os;
        }
        void getNameColor()
        {
            cout << "Get name of Color: " << this->nameColor << endl;
        }
};

class Point
{
    protected:
        int x;
        int y;
    public: 
        Point()
        {
            x = y = 0;
        }
        ~Point()
        {
            x = y = 0;
        }
        friend istream& operator >> (istream& is, Point& po)
        {
            cout << "Enter value x of Point: ";
            is >> po.x;
            cout << "Enter value y of Point: ";
            is >> po.y;
            return is;
        }
        friend ostream& operator << (ostream& os, Point po)
        {
            os << "Value x of Point: " << po.x << endl;
            os << "Value y of Point: " << po.y << endl;
            return os;
        }
        void checkLineMain()
        {
            int lineMain = 0;
            if (x == y) 
            {
                lineMain = 1;
                cout << "Point is on the Main line" << endl;
            }
            else
            {
                cout << "Point is not on the Main line" << endl;
            }
        } 
};

class Pixel : public Color, public Point
{
    public:
        Pixel()
        {
            nameColor = codeColor = "";
            x = y = 0;
        }
        ~Pixel()
        {
            nameColor = codeColor = "";
            x = y = 0;
        }
        friend istream& operator >> (istream& is, Pixel& pix)
        {
            cout << "Enter the name of Color: ";
            is >> pix.nameColor;
            cout << "Enter the code of Color: ";
            is >> pix.codeColor;
            cout << "Enter value x of Point: ";
            is >> pix.x;
            cout << "Enter value y of Point: ";
            is >> pix.y;
            return is;
        }
        friend ostream& operator << (ostream& os, Pixel pix)
        {
            os << "Name of Color: " << pix.nameColor << endl;
            os << "Code of Color: " << pix.codeColor << endl;
            os << "Value x of Point: " << pix.x << endl;
            os << "Value y of Point: " << pix.y << endl;
            return os;
        }
        int checkPixelBlueLineMain()
        {
            int check = 0;
            if (((nameColor == "Blue")||(nameColor == "blue")) && (x == y))
            {
                check = 1;
            }
            else
            {
                check = 0;
            }
            return check;
        }
};

int main()
{
    // Color colorObj;
    // cin >> colorObj;
    // cout << colorObj;

    //Get name of Color
    //colorObj.getNameColor();

    // Point pointObj;
    // cin >> pointObj;
    // cout << pointObj;
    // pointObj.checkLineMain();

    int amountPixel = 0;
    int amountBlueLine = 0;
    cout << "Enter amout of pixel: "; cin >> amountPixel;
    Pixel *arrPix = new Pixel[amountPixel];
    for (int i = 0; i < amountPixel; i++)
    {
        cin >> arrPix[i];
    }
    
    for (int i = 0; i < amountPixel; i++)
    {
        if (arrPix[i].checkPixelBlueLineMain() == 1)
        {
            amountBlueLine++;
            if (amountBlueLine == 1) 
            {
                cout << "\n\n===>Pixels that are blue and are on the line main <===" << endl;
            }
            cout << amountBlueLine << ". " << arrPix[i] << endl;
        }
    }
    if (amountBlueLine == 0) 
    {
        cout << "\n\n===> Have not pixels that are blue and are on the line main <===" << endl;
    }  
    return 0;
}
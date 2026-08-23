// Create a class to store Complex numbers. Using operator overloading, 
// create the logic to subtract one complex number from another.


#include<iostream>
using namespace std;

class Complex
{
    int real;
    int img;

    public:
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }

    void showNum()
    {
        cout << real << " - " << img << "i" << endl;
    }

    void operator - (Complex &c2)
{
   int realRes = this-> real - c2.real;
   int imgRes = this-> img - c2.img;
   Complex c3(realRes, imgRes);
    cout << "res: ";
    c3.showNum();
}

};


int main()
{
    Complex c1(5, 6);
    Complex c2(2, 4);

    c1.showNum();
    c2.showNum();

    c1 - c2;

    return 0;
}

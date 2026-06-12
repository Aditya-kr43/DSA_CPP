#include<iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout << "enter the number a: ";
    cin >> a;
     cout << "enter the number b: ";
    cin >> b;
     cout << "enter the number c: ";
    cin >> c;
    if(a > b)
    {
        cout << "largest num: " << a << endl;
    }
    else if (b > c)
    {
        cout << "largest num: " << b << endl;
    }
    else if (a > c)
    {
        cout << "largest num: " << a << endl;
    }
    else
    {
        cout << "largest num: " << c << endl;
    }
    return 0;
}
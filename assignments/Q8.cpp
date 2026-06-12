#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the number: ";
    cin >> a;
    if(a % 2 == 0)
    {
        cout << "even num";
    }
    else
    {
        cout << "odd num";
    }
    return 0;
}
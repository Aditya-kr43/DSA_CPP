#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 4;
    cout << ((a>b) && (a<b)) << endl; //and opr
    cout << ((a>b) || (a<b)) << endl; //or
    cout << (5!=4) << endl; //not
    cout << (!(5==5)) << endl;
    return 0;
}
#include<iostream>
using namespace std;
int prod(int a, int b) //create functios
{
    int prod1 = a*b;
    return prod1;
}
int main()
{
    int product = prod(4,3); //calling function
    cout << "product = " << product << endl;
    return 0;
}
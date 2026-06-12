#include<iostream>
using namespace std;
int factorial(int a)
{   
    int fact = 1;
    for(int i=1; i<=a; i++)
    {
        fact= fact*i;
    }
    cout << "factorial is: " << fact << endl;
    return fact;
}
int main ()
{
    factorial(4);
  
    return 0;
}
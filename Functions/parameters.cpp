//Write a function which takes 2 numbers as parameters (a & b) and outputs : a^2 + b^2 + 2*ab. 
#include<iostream>
#include<math.h>
using namespace std;
float parameters(int a, int b)
{
    float equation = pow(a,2) + pow(b,2) + 2*a*b;
    return equation;
}
int main ()
{
    float result = parameters(2,2);
    cout << "result = " << result << endl;
    return 0;
}
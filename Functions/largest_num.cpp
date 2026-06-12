// Write a function that prints the largest of 3 numbers.
#include<iostream>
using namespace std;
void num(int a, int b, int c)
{
    
    if (a>b)
    {
       cout << "a is greater" << endl;
    }
    else if (b>c)
    {
        cout << "b is greater" << endl;
    }
    else
    {
       cout << "c is greater" << endl;
    }
}
int main ()
{
    num(100000000,70000000,40000000);
    return 0;
}
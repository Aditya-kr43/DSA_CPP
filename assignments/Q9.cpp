#include <iostream>
using namespace std;
int main ()
{
    int salary;
    float tax;
    cout << "enter your salary (in lakhs): ";
    cin >> salary;
    if(salary < 5)
    {
        tax = 0;
    }
    else if(salary >= 5 && salary <= 10) //(salary >=10)
    {
        tax = 0.2*salary;
    }
    else
    {
        tax = 0.3*salary;
    }
    cout << "tax= " << (tax*100000) << endl;
    return 0;
}
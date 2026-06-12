#include<iostream>
using namespace std;
int sum(int a, int b)
{
    int sumation = a+b;
    return sumation;
}
int main()
{
   int result= sum(5,6);
    cout << "Result = " << result << endl;
    return 0;


}
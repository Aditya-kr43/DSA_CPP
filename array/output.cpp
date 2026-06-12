#include<iostream>
using namespace std;
int main()
{
    int marks[5] = {4,5,6,7,8};
    int n = sizeof(marks)/sizeof(int); //when we don't know the sizes
    for(int ind= 0; ind < n; ind++)
    {
        cout << marks[ind] << " " <<endl;
    }
    return 0;
}
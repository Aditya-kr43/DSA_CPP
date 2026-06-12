#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout << "enter the number" <<endl;
    cin >> num;
    for(i = 1; i <=10; i++)
    {
        int n1=num*i;
        cout << n1 << endl;   
    }
  
    return 0;
}
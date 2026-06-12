#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int sum = 0;
    for(int i=0; i<=n; i++)
    {
        sum = sum + i;
          }
        cout << "sum= " << sum << endl;
  return 0;
}
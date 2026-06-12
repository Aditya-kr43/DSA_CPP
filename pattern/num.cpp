#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int i;
    for(i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}
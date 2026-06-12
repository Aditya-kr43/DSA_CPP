#include<iostream>
using namespace std;
int main()
{
    int n = 4;
    for(int i=1; i<=n; i++)
    {
        for( int j=1; j<=i; j++)
        {
            cout << "*";
        }
       // cout << endl;
        for(int k=1; k<=2*(n-i); k++)
        {
            cout << " ";
        }
        for(int l=1; l<=i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int m=n; m>=1; m--)
    {
        for( int o=1; o<=m; o++)
        {
            cout << "*";
        }
       // cout << endl;
        for(int p=1; p<=2*(n-m); p++)
        {
            cout << " ";
        }
        for(int q=1; q<=m; q++)
        {
            cout << "*";
        }
        cout << endl;
    }



    return 0;
}
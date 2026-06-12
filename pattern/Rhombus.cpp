#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout << " ";
        }
        //cout << endl;
        for(int l=1; l<=n; l++)
        {
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}
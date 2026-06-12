#include<iostream>
using namespace std;
bool isprime(int n)
{
    if(n == 1)
    {
        return false;
    }
    for(int i=2; i<=n-1; i++)
    {
        if(n%i==0)
        {
          return false;
        }
        else
        return true;
    }
}
void allprime(int n)
{
    for(int i=2; i<=n; i++)
    {
        if(isprime(i))
         {
        cout << i << " ";
         }
    }
    cout << endl;
}
int main()
{
    allprime(10);
    return 0;
}
#include<iostream>
using namespace std;
bool isprime (int a)
{
    if(a==1)
    {
        return false;
    }
    for(int i=2; i<=a-1; i++)
    {
        
    if(a%i == 0)
    {
        return false;
    }
    else
    return true;
    }
}
int main()
{
    int result= isprime(1);
    cout << result << endl;
    return 0;

}
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[100] = "Apna";
    char str2[100] = "College";
    strcat(str1, str2);
    cout << str1 << endl;
   
    return 0;
}
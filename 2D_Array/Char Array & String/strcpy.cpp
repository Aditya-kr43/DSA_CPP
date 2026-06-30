#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[100];
    char str2[100] = "Apna College";
    char str3[100];
    strcpy(str1, "apna college1");
    cout << str1 << endl;
    strcpy(str3, str2);
    cout << str3 << endl;
    return 0;
}
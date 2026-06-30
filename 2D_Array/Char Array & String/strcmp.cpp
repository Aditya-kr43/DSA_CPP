#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[100] = "abc";
    char str2[100] = "abc";
    cout << strcmp(str1, str2) << endl; // return 0

    char str3[100] = "abc";
    char str4[100] = "xyz";
    
    cout << strcmp(str3, str4) << endl; //return -ve

    char str5[100] = "xyz";
    char str6[100] = "abc";
    
    cout << strcmp(str5, str6) << endl; //return +ve
   
    return 0;
}
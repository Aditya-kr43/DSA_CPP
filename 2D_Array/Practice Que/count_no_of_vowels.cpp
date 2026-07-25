//  Count how many times lowercase vowels occurred in a String entered by the user. 
#include<iostream>
using namespace std;
int main()
{
string str1 = "aditya";
int count[26] = {0};
for(int i = 0; i<str1.length(); i++)
{
    int idx = str1[i]-'a';
    count[idx]++;
}
cout << "a = " << count['a'-'a'] << endl;
cout << "e = " << count['e'-'a'] << endl;
cout << "i = " << count['i'-'a'] << endl;
cout << "o = " << count['o'-'a'] << endl;
cout << "u = " << count['u'-'a'] << endl;
return 0;
}
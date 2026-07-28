// You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose 
// two indices in a string (not necessarily different) and swap the characters at these indices.
// Return true if it is possible to make both strings equal by performing at most one string swap on exactly 
// one of the strings. Otherwise, return false. 
// Example : Input: s1 = "bank", s2 = "kanb" Output: 
// true 
// Explanation: For example, swap the first character with the last character of s2 to make "bank".  
#include<iostream>
using namespace std;
    bool isSame(string str1, string str2)
    {
        //checks the length of the strings
        if(str1.length() != str2.length())
        {
            return false;
        }
        //checking it is equal or not
        int first = -1;
        int second = -1;
        for(int i = 0; i < str2.length(); i++)
        {
            if(str1[i] != str2[i])
            {
               if(first == -1)
               {
                first = i;
               }
               else if(second == -1)
               {
                second = i;
               }
               else // jab 2 se jyda differences ho jaye tab
               {
                return false;
               }
            }
        }
        if(first == -1) //agar string already equal ho
        {
            return true;
        }
        if(second != -1 && str1[first] == str2[second] && str1[second] == str2[first]) //swaps if the unquals find
        {
            return true;
        }
    }

int main()
{
    string str1 = "bank";
    string str2 = "kanb";
    if(isSame(str1, str2))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}
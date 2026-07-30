// 1657. Determine if Two Strings Are Close
// Two strings are considered close if you can attain one from the other using the following operations:

// Operation 1: Swap any two existing characters.
// For example, abcde -> aecdb
// Operation 2: Transform every occurrence of one existing character into another existing character, and do the same with the other character.
// For example, aacabb -> bbcbaa (all a's turn into b's, and all b's turn into a's)
// You can use the operations on either string as many times as necessary.

// Given two strings, word1 and word2, return true if word1 and word2 are close, and false otherwise.
// Example 1:
// Input: word1 = "abc", word2 = "bca"
// Output: true
// Explanation: You can attain word2 from word1 in 2 operations.
// Apply Operation 1: "abc" -> "acb"
// Apply Operation 1: "acb" -> "bca"
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length() != word2.length())
        {
            return false;
        }
        //count frequency
        int count1[26] = {0};
        for(int i = 0; i < word1.length(); i++)
        {
            int idx = word1[i] - 'a';
            count1[idx]++;
        }
        int count2[26] = {0};
        for(int i = 0; i < word2.length(); i++)
        {
           int temp = word2[i] - 'a';
            count2[temp]++; 
        }
        // checks same characters present hai
        for(int i = 0; i < 26; i++) 
        {
            if(count1[i] != 0 && count2[i] == 0 || count1[i] == 0 && count2[i] != 0)
            {
                return false;
            }
        }
        //frequency ko compare karenge
        sort(count1, count1+26);
        sort(count2, count2+26);
        for(int i = 0; i < 26; i++)
        {
            
             if(count1[i] != count2[i])
        {
            return false;
        }
        }
        return true;
       
    }
};
int main()
{
    string word1 = "aab";
    string word2 = "ccb";
   Solution s;
    if(s.closeStrings(word1, word2))
        cout << "Close Strings";
    else
        cout << "Not Close Strings";
        return 0;
}
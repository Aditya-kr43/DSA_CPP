//                    LEETCODE QUESTION
// Question 1 : Given an integer array nums, return true if any value appears at least 
// twice in the array, and return false if every element is distinct. 
// Examples : 
// Input: nums = [1,2,3,4] 
// Output: false 
// Input: nums = [1,1,1,3,3,4,3,2,4,2] 
// Output: true
#include<iostream>
using namespace std;
 bool isTwice(int *num, int size)
 {
    for(int i = 0; i <size; i++)
    {
        for(int j = i+1; j <size; j++)
        {
        if(num[i] == num[j])
        {
            return true;
        }
        }
    }
    return false;
}
 int main()
 {
    int num[5] = {1,2,3,1,4};
    int size = sizeof(num)/sizeof(int);
    if(isTwice(num, size))
    {
        cout << "true" << endl;
    }
    else 
    cout << "false" << endl;
    return 0;  
 }
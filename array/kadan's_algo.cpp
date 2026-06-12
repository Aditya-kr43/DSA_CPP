#include<iostream>
using namespace std;
void maxSumArr(int *arr, int size)
{
    int maxSum = INT8_MIN;
    int currSum = 0;
    for(int i=0; i<size; i++)
    {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << "max Subarray Sum: " << maxSum << endl;
}
int main()
{
    int arr[] = {2,-3,6,-5,4,2};
    int size = sizeof(arr)/sizeof(int);
    maxSumArr(arr, size);
    return 0;
}
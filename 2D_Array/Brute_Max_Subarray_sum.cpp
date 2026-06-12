#include<iostream>
using namespace std;

void SubarraySum(int *arr, int n)
{
    int maxarray = INT32_MIN;
    for(int start = 0; start < n; start ++)
    {
        for(int end = start; end < n; end ++)
        {
            int currSum = 0;
            for(int i = start; i<=end; i++)
            {
                currSum += arr[i];
          }
          cout << currSum << ",";
          maxarray = max(maxarray, currSum);
        }
        cout << endl;
    }
    cout << "Max Subarray Sum = " << maxarray << endl;
}

int main()
{
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    SubarraySum(arr, n);
    return 0;
}
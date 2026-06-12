//max sum subarray (brute force)
//use when it has negative numbers
//very worst time complexity O(n^3)
//very low preference method
#include<iostream>
using namespace std;
void maxsubarraysum(int *arr, int size)
{
    int maxsum = INT64_MIN;
    for(int start = 0; start <= size; start++)
    {
        for(int end = start; end <= size; end++)
        {
            int sumarr = 0;
            for(int i = 0; i<= end; i++)
            {
                sumarr = sumarr + arr[i];
            }
            cout << sumarr << ",";
            maxsum = max(maxsum, sumarr);
        }
        cout << endl;
    }
    cout << "max sum subarray = " << maxsum << endl;
}
int main()
{
    int arr[] = {1, -2, 3, 4, -5};
    int size = sizeof(arr)/sizeof(int);
    maxsubarraysum(arr, size);
    return 0;
}
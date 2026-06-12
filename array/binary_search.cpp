#include<iostream>
using namespace std;

int binary(int *arr, int size, int key)
{
    int start = 0, end = size-1;
    while(start <= end)
    {
        int mid = (start+end)/2; //mid calculation
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] < key) //2nd half
        {
            start = mid+1;
        }
        else //1st half
        end = mid-1;
    }
    return -1;
}
int main()
{
    int arr[] = {4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    cout << binary(arr, size, 5) << endl;//calling a function
    return 0;
}
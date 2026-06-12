//reverse an array with extra space
#include<iostream>
using namespace std;
void reverse(int *arr, int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}
int main()
{
    int arr[]= {5, 4, 3, 2, 1};
    int size = sizeof(arr)/sizeof(int);
    int copyarr [size];
    for(int i=0; i<size; i++)
    {
     int  j=size-i-1;
     copyarr[i]=arr[j];
    }
    for(int i=0; i<size; i++)
    {
        arr[i]=copyarr[i];
    }
    reverse(arr, size);
    return 0;
}
//time complexity = O(n)
//space complexity = O(n)


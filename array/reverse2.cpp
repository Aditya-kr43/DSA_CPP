//reverse an array without extra space
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
    int arr[] = {1, 2, 3, 4, 5};
    int size= sizeof(arr)/sizeof(int);
    
    int start= 0;
    int end = size-1;
    while(start < end)
    {
        
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    reverse(arr, size);
    return 0;
}
#include<iostream>
using namespace std;
int linearsearch(int *arr, int size, int key)
{
   //size = sizeof(arr)/sizeof(int);
    for (int ind = 0; ind < size; ind++)
    {
        if(arr[ind]==key)
        {
            return ind;
        }
    }
    return -1;
}
int main()
{
    int arr[]={12, 13, 14, 15, 16};
    int size = sizeof(arr)/sizeof(int);
    cout << linearsearch(arr, size, 14);
    return 0;
}
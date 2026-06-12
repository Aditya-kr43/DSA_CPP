#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    int max = arr[0];
    for(int ind=0; ind < size; ind ++)
    {
        if(arr[ind] > max)
        {
            max = arr[ind];
        }
    }
    cout << "largest num: " << max <<endl;
    return 0;
}
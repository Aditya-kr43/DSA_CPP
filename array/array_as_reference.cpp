#include<iostream>
using namespace std;
void printarr(int arr[])
{
   arr[0]=1000;
}

int main()
{
    int a=5;
    int *ptr = &a;
    cout << ptr << endl;

    int arr[]={1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(int);

    printarr(arr); //passing an array is equivalent to passing the pointer.
    cout << arr[0] << endl;
    return 0;

}
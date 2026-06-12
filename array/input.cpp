#include<iostream>
using namespace std;
int main()
{
    int size;
    cout <<"Enter th size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements: ";
    for(int ele = 0; ele <size; ele++)
    {
        cin >> arr[ele];
    }
    for(int indx=0; indx < size; indx++)
    {
        cout << arr[indx] << ",";
    }
    return 0;
}
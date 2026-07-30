#include<iostream>
using namespace std;
void funcInt()
{
     int size;
    cout << "Enter the Size: ";
    cin >> size;
    int *arr = new int[size];

    int x =1;
    for(int i = 0; i < size; i++)
    {
        arr[i] = x;
        cout << arr[i] << " ";
        x++;
    }
    cout << endl;
    delete [] arr;  //free the memory that is created by new
}
int main()
{
    funcInt();
    return 0;
}
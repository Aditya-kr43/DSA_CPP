//  3 : Write a program to Find Transpose of a Matrix. 
// What is Transpose? 
// Transpose of a matrix is the process of swapping the rows to columns. 
//For a 2x3  matrix, 
// Matrix 
// 11 12 13 
// 21 22 23 
// Transposed Matrix 
// 11 21 
// 12 22 
// 13 23 
#include<iostream>
using namespace std;
int main()
{
    int r = 2, c = 3;
    int arr[][3] = {{11,12,13}, {21,22,23},}; 
    int transpose[c][r] = {{0}};
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
    //print
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j<r; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
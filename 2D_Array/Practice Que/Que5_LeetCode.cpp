// 48. Rotate Image
// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
// Example 1:
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[7,4,1],[8,5,2],[9,6,3]]
#include<iostream>
using namespace std;
int main()
{
    int n=3;
    int mat[n][n] = {{1,2,3},{4,5,6},{7,8,9}};
    //Transpose
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }
    //Reverse
     for (int i = 0; i < n; i++)
     {
    int start = 0;
    int end = n-1;
    while(start < end)
    {
        swap(mat[i][start], mat[i][end]);
        start ++;
        end--;
    }
}
//print matrix
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout << mat[i][j] << " ";

        }
        cout << endl;
    }
    return 0;
}
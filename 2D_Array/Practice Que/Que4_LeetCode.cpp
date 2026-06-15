// 2022 Convert 1D Array Into 2D Array
// You are given a 0-indexed 1-dimensional (1D) integer array original,and two integers, m and n.
// You are tasked with creating a 2-dimensional (2D) array with 
//  m rows and n columns using all the elements from original.

// The elements from indices 0 to n - 1 (inclusive) of original should form the 
// first row of the constructed 2D array, the elements from indices n to 2 * n - 1 (inclusive) should form 
// the second row of the constructed 2D array, and so on.

// Return an m x n 2D array constructed according to the above procedure, or an empty 2D array if it is impossible.
#include<iostream>
using namespace std;
int main()
{
    int org[]={1,2,3,4,5,6};
    int size = sizeof(org)/sizeof(org[0]);
    int m = 2, n = 3;
    if(size== m*n)
    {   
        int mat[m][n];
        int idx = 0;
        for(int i = 0; i <m; i++)
            {
             for(int j = 0; j <n; j++)
             {
            mat[i][j] = org[idx];
            idx++;        
            
             }
            } 
                for(int i = 0; i <m; i++)
                 {
             for(int j = 0; j <n; j++)
                 {
            cout << mat[i][j] << " ";
                 }
            cout << endl;
                 }  
    }
    else
    cout << "not possible" << endl;
    return 0;
}
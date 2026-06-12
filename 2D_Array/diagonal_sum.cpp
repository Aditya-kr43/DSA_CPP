#include<iostream>
using namespace std;

int DiagonalSum(int matrix[][4], int n)
{
  int Sum = 0;
//   //time complexity = O(N^2)
//   for(int i=0; i<n; i++)
//   {
//     for(int j=0; j<n; j++)
//     {
//         if(i == j)
//         {
//             Sum += matrix[i][j];
//         }
//         else if(j == n-i-1)
//         {
//             Sum += matrix[i][j];
//         }
//     }
//   }


// time complexity = O(N)
for(int i = 0; i<n; i++)
{
    Sum += matrix[i][i];


if(i != n-i-1)
{
    Sum += matrix[i][n-i-1];
}
}
  cout << "Sum = " << Sum << endl;
    return Sum;
}
int main()
{
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};

    DiagonalSum(matrix, 4);

    return 0;

}
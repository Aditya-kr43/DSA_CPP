//search in sorted array
#include<iostream>
using namespace std;

bool SearchArray(int matrix[][4], int n, int m, int key)
{
    int i = 0, j = m-1;
    while(i < n && j >= 0)
    {
        if (matrix[i][j] == key)
        {
            cout << "found element at : (" << i <<","<< j << ")" << endl;
            return true;
        }
        else if(matrix[i][j] < key)
        {
           i++;
        }        
        else if(matrix[i][j] > key)
        {
            j--;
        }
    }
    cout << "element not found" <<endl;
        return false;
}

int main()
{
    //int key = 33;
    int matrix [4][4] = {{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}};
                    
    SearchArray(matrix, 4, 4, 33);
    return 0;
}
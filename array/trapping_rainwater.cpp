//this question from leetcode
//calculate the amount of water traped
#include<iostream>
using namespace std;

int trap( int *height, int size)
{
    int leftMax[20000], rightMax[20000];;
    leftMax[0] = height[0];
    rightMax[size-1] = height[size-1];

    for(int i = 1; i < size; i++) //print left max values
    {
        leftMax[i] = max(leftMax[i-1], height[i-1]);
        //cout << leftMax[i] << ", ";
    }
   // cout << endl;
   for(int i = size-2; i >= 0; i--)//print right max values
   {
    rightMax[i] = max(rightMax[i+1], height[i+1]);
    //cout << rightMax[i] << ", ";
   }
  // cout << rightMax[size-1] << ", ";
   //cout << endl;
   int waterTrapped = 0; //total trap water:
   for(int i = 0; i < size; i++)
   {
    int currWater = min(rightMax[i], leftMax[i]) - height[i];
    if(currWater > 0)
    {
        waterTrapped += currWater;
    }
   }
   cout << "water trapped: " << waterTrapped << endl;
   return waterTrapped;
}

int main()
{
    int height[7] = {4,2,0,6,3,2,5};
    int size = sizeof(height)/sizeof(int);
    trap(height, size);
    return 0;

}
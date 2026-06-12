// There is an integer array nums sorted in ascending order (with distinct 
// values). 
// Prior to being passed to your function, nums is possibly rotated at an unknown pivot 
// index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., 
// nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] 
// might be rotated at pivot index 3 and become [4,5,6,7,0,1,2]. 
// Given the array nums after the possible rotation and an integer target, return the 
// index of target if it is in nums, or -1 if it is not in nums. 
// You must write an algorithm with O(log n) runtime complexity

#include<iostream>
using namespace std;

int search(int nums[], int size, int target)
{
    int start = 0, end = size - 1;

    while(start <= end)
    {
        int mid = (start + end) / 2;

        // Step 1: check if found
        if(nums[mid] == target)
            return mid;

        // Step 2: check which half is sorted
        if(nums[start] <= nums[mid])  // LEFT is sorted
        {
            // Step 3: check if target lies in left
            if(target >= nums[start] && target < nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        else  // RIGHT is sorted
        {
            // Step 3: check if target lies in right
            if(target > nums[mid] && target <= nums[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int nums[] = {4,5,6,7,0,1,2};
    int size = sizeof(nums)/sizeof(int);
    int target = 0;

    int ans = search(nums, size, target);

    if(ans != -1)
        cout << "Element found at index: " << ans;
    else
        cout << "Element not found";

    return 0;
}
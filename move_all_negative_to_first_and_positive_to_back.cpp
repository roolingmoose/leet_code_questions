// Problem statement
// You are given an array 'ARR' consisting of 'N' integers. You need to rearrange the array elements such that all negative numbers appear before all positive numbers.

// Note:
// The order of elements in the resulting array is not important.
// Example:
// Let the array be [1, 2, -3, 4, -4, -5]. On rearranging the array such that all negative numbers appear before all positive numbers we get the resulting array [-3, -5, -4, 2, 4, 1].
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 10
// 1 <= N <= 5 * 10^4
// -10^5 <= ARR[i] <= 10^5

// Where  ‘T’ represents the number of test cases and ‘N’ represents the number of elements present in the array.

// Time Limit: 1 




#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    vector <int> ans;
    for(int i =0;i<nums.size();i++){
        if(nums[i]<0){
            ans.push_back(nums[i]);
        }
    }
     for(int i =0;i<nums.size();i++){
        if(nums[i]>=0){
            ans.push_back(nums[i]);
        }
    }
    return ans;
}

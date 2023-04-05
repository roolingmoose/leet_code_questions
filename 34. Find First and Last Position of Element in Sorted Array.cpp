//Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

//If target is not found in the array, return [-1, -1].

//You must write an algorithm with O(log n) runtime complexity.
//Input: nums = [5,7,7,8,8,10], target = 8
//Output: [3,4]
//Constraints:

//0 <= nums.length <= 105
//-109 <= nums[i] <= 109
//nums is a non-decreasing array.
//-109 <= target <= 109

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int>ans;
        if(nums.size()==1&&nums[0]==target ) {
        
        ans.push_back(0); ans.push_back(0);
        }
            else{

        
        
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==target)  {ans.push_back(i);   break;} 
        }

        for(int j=nums.size()-1;j>=0;j--){
            if(nums[j]==target){ans.push_back(j) ; break;}
        }}

        if(!ans.empty()){
       
           
        }
        else{

            ans.push_back(-1);
        ans.push_back(-1);
        }
        return ans;
    }
};






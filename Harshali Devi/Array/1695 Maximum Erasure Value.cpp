//Day 18
//Sliding Window
//https://leetcode.com/problems/maximum-erasure-value/description/

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {

        int prefixSum=0;
        vector<int>sum(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            prefixSum+=nums[i];
            sum[i]=prefixSum;
        }

        unordered_map<int,int>hashtable;

        int maxSum=0;
        int left=0;
        int CurrentSum = 0;
        for(int i=0;i<nums.size();i++){
            if((hashtable.find(nums[i])!=hashtable.end())&&hashtable[nums[i]]>=left){
                left=hashtable[nums[i]]+1;
            }

            CurrentSum = sum[i] - (left > 0 ? sum[left - 1] : 0);
            maxSum = max(maxSum, CurrentSum);
            hashtable[nums[i]] = i;

        }

        return maxSum;
    }
};

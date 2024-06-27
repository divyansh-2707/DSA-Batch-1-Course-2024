class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int mul=1,count=0;
        if(k <= 1){
            return 0;
        }
        for(int i=0,j=0;j<nums.size();j++){
            mul*=nums[j];
            while(mul >= k){
                mul=mul/nums[i];
                i++;
            }
            count=count+j-i+1;
        }
        return count;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(1)

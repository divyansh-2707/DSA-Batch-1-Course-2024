class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0;
        }
        int n=nums.size();
        int i=0,j=0;
        int mul=1;
        int count=0;
        while(j<n){
           mul=mul*nums[j];
           while(mul>=k){
            mul=mul/nums[i++];
           }
           count=count+j-i+1;
           j++;

        }
        return count;
    }
};

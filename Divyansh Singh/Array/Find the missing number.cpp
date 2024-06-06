class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<=nums.size();i++){
            sum+=i;
        }
        int sum1=0;
        for(int i=0;i<nums.size();i++){
            sum1+=nums[i];
        }

        return sum-sum1;
    }
};

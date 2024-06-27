class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen=0,zero=0;
        for(int i=0,j=0;j<nums.size();){
            if(nums[j]==0){
                zero++;
            }
            while(zero > k){
                if(nums[i]==0){
                    zero--;
                }
                i++;
            }
            if(zero <= k){
                int len=j-i+1;
                maxlen=max(maxlen,len);
                j++;
            }
        }
        return maxlen;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(1)

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i<n;i++){
            int val = nums[i];
            if(val>0 && val<=n){
            int chair = val-1;
            if(val!=nums[chair]){
                swap(nums[i], nums[chair]);
                i--;
            }
            }
        }
    
        for(int i=0; i<n; i++){
            if(nums[i]!=i+1)
                return i+1;
        }
       return n+1; 
    }
};
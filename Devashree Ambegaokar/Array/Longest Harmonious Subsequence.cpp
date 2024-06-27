class Solution {
public:
    int findLHS(vector<int>& nums) {
        int ans =0;
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        for(auto x:mp){
            if(mp.find(x.first-1)!=mp.end()){
                ans = max(ans, x.second+mp[x.first-1]);
            }
        }
        return ans;
    }
};

//time and space complexity is O(n)
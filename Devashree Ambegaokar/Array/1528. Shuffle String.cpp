class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.size();
        string ans(n, ' ');
        map<int, char>mp;
        for(int i=0; i<indices.size(); i++){
            mp[indices[i]] = s[i];
        }
        for(int i=0; i<n; i++){
            ans[i]=mp[i];
        }
        return ans;
    }
};
//time complexity = O(nlogn) and space complexity = O(n)
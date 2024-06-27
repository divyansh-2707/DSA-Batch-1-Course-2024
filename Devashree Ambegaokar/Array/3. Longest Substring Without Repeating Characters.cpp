class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int> vec (128, 0);
        int j = 0;
        int maxlen = 0;
        for(int i =0; i<s.size(); i++){
            if(vec[s[i]] != 0){
                j = max(j, vec[s[i]]);
            }
            vec[s[i]] = i+1;
            maxlen = max(maxlen , i-j+1);
        }
       return maxlen;
    }
};
//Time and Space Complexity =O(n)
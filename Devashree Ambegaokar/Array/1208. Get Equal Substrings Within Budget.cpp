class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n =s.size();
        int start = 0;
        int curr = 0;
        int max_len = 0;
        for(int i=0; i<n; i++){
            curr+=abs(s[i] - t[i]);
            while(curr>maxCost){
                curr-=abs(s[start] -t[start]);
                start++;
            }
            max_len = max(max_len, i-start+1);
        }
      return max_len;  
    }
};
//Time complexity = O(n) and Space Complexity = O(1)
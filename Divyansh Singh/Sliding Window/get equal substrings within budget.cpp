class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.length();
        int start=0,end=0;
        int maxL=0;
        while(end<n){
            maxCost=maxCost-abs(s[end]-t[end]);

            while(maxCost<0){
                maxCost=maxCost+abs(s[start]-t[start]);
                start++;
            }
            maxL=max(maxL,end-start+1);
            end++;
        }
        return maxL;
    }
};

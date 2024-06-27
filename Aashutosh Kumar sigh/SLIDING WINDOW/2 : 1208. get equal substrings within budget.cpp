//using while loop in for loop
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int maxlen=0;
        for(int i=0,j=0;j<s.size();){
            maxCost-=abs(s[j]-t[j]);
            while(maxCost < 0){
                maxCost+=abs(s[i]-t[i]);
                i++;
            }
            if(maxCost >= 0){
                int len=j-i+1;
                maxlen=max(maxlen,len);
                j++;
            }
        }
        return maxlen;
    }
};

TIME COMPLEXITY :O(2n)=O(n)
SPACE COMPLEXITY :O(1)

//without using while loop in for loop
//instead of while we use if which reduces complexity
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int maxlen=0;
        for(int i=0,j=0;j<s.size();j++){
            maxCost-=abs(s[j]-t[j]);
            if(maxCost < 0){
                maxCost+=abs(s[i]-t[i]);
                i++;
            }
            if(maxCost >= 0){
                int len=j-i+1;
                maxlen=max(maxlen,len);
            }
        }
        return maxlen;
    }
};

TIME COMPLEXITY :O(n)
SPACE COMPLEXITY :O(1)

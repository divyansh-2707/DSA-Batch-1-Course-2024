class Solution {
public:
    int maxVowels(string s, int k) {
        int max1=0,maxlen=0;
        for(int i=0,j=0;j<s.size();j++){
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                max1++;
            }
            while(j-i+1 > k){
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                    max1--;
                }
                i++;
            }
            if(j-i+1 == k){
                maxlen=max(maxlen,max1);
            }
        }
        return maxlen;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(1)

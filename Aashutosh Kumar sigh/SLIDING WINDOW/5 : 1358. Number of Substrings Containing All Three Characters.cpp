class Solution {
public:
    int numberOfSubstrings(string s) {
        int a=0,b=0,c=0,count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                a=i+1;
            }
            if(s[i]=='b'){
                b=i+1;
            }
            if(s[i]=='c'){
                c=i+1;
            }
            if(c>0 && a>0 && b>0){
                count=count+ min({a,b,c});
            }
        }
        return count;
    }
};

TIME COMPLEXITY : O(n)
SPACE COMPLEXITY : O(1)

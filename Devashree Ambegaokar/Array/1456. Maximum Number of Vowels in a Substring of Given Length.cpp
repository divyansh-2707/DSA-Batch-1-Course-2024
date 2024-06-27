class Solution {
public:
    bool isVowel(char &ch){
        return ch =='a'|| ch =='e'|| ch =='i'|| ch =='o'|| ch =='u';
    }
    int maxVowels(string s, int k) {
        int n = s.length();
        int j = 0,i=0;
        int count =0;
        int maxcount = 0;
     while(j<n){
        if(isVowel(s[j]))
            count++;
        if(j-i+1==k){
            maxcount = max(maxcount, count);
            if(isVowel(s[i])){
                    count--;
               }
             i++;
        }
         j++; 
     }
       return maxcount; 
    }
};
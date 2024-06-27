class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>pCount(26,0);
        vector<int>sCount(26,0);
        vector<int>ans;
        int n = p.size();
        for(int i=0; i<n;i++){
            pCount[p[i]-'a']++;
        }

        for(int i =0; i<s.size();i++){
            sCount[s[i] -'a']++;
            if(i>n-1){
                sCount[s[i-n]-'a']--;
            }
        
            bool anagram = true;
        for(int j=0; j<26; j++){
            if(sCount[j]!=pCount[j]){
                anagram=false;
                break;
            }
           
        } 
               if(anagram)
            ans.push_back(i-n+1);  
        }
           
        
        return ans;
    }
};

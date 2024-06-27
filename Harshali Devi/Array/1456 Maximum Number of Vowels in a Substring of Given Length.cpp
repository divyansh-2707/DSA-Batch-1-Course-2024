//Day 18
//https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/description/

//Less efficient
class Solution {
public:
    int maxVowels(string s, int k) {
        
        vector<char>vowels={'a','e','i','o','u'};
        int count=0;
        int left=0;
        int k1=0;
        int finalCount = 0;
        for(int i=0;i<s.size();i++){
            if(find(vowels.begin(), vowels.end(), s[i]) != vowels.end()){
                count++;
            }
            k1++;
            if(k1==k){
                finalCount=max(count,finalCount);
                if(find(vowels.begin(), vowels.end(), s[left]) != vowels.end()){
                    count--;}
                left++;
                k1--;
            }
        }

        return finalCount;
    }
};

//More Efficient
class Solution {
public:
    bool isVowel(char ch)
    {
        if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return true;
        if( ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') return true;
        return false;
    }
    int maxVowels(string s, int k) {
        
        int count=0;
        int left=0;
        int k1=0;
        int finalCount = 0;
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                count++;
            }
            k1++;
            if(k1==k){
                finalCount=max(count,finalCount);
                if(isVowel(s[left])){
                    count--;}
                left++;
                k1--;
            }
        }

        return finalCount;
    }
};

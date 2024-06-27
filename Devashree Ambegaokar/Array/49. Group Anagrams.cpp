class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;
    string copy;
    for(auto a : strs){
        copy = a;
        sort(copy.begin(), copy.end());
        mp[copy].push_back(a);
    }
    vector<vector<string>> vec;
    for(auto a : mp ){
        vec.push_back(a.second);
    }  
    return vec;
    }
};
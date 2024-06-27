class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int i=0, j=0, sum=0, curr=0, res=0;
        for(auto a: cardPoints){
            sum+=a;
        }
        if(k==cardPoints.size()){
            return sum;
        }
        while(j<cardPoints.size()){
            curr+= cardPoints[j];
            if(j-i+1<cardPoints.size()-k){
                j++;
            }
            else{
                res = max(res, sum-curr);
                curr-=cardPoints[i];
                i++;
                j++;
            }
        }
        return res;
    }
};

//Time complexity = O(n) and space complexity = O(1)
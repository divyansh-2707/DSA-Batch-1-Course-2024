//Day 18
//https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/description/

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        int count=0;
        int left=0;
        int k1=0;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            k1++;
            if(k1==k){
                if(sum/k>=threshold){
                    count++;
                }
                sum-=arr[left];
                left++;
                k1--;
            }
        }

        return count;
    }
};

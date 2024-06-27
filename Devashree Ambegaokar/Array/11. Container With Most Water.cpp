class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxlen =0;
        int start =0;
        int end = height.size()-1;
        while(start<end){
            if(height[start]<=height[end]){
                int area = height[start] * (end-start);
                maxlen = max(maxlen, area);
                start++;
            }
            else{
                int area = height[end] *(end-start);
                maxlen = max(maxlen, area);
                end--;
            }
        }
       return maxlen; 
    }
};
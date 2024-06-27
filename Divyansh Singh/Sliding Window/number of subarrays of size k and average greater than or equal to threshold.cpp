class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int i=0,j=0,count=0;
        int sum=0;
        int l=k;
        while(j<n){
           sum=sum+arr[j];
            k--;
            if(k<=0 && ((sum/l) < threshold)){
            sum=sum-arr[i++];
            k++;
           }
            else if(k<=0 && sum/l >= threshold){
            sum=sum-arr[i++];
            count++;
            k++;
           }
           j++;

        }
        return count;
    }
};

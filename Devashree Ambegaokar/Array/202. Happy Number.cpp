class Solution {
public:

    int Next(int num){
        int sum =0;
        while(num>0){
            int digit = num%10;
            sum+=digit*digit;
            num =num/10;
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int>seen;
        while(n!=1 && seen.count(n)==0){
            seen.insert(n);
            n = Next(n);
        }

         return n==1;
    }

   
};

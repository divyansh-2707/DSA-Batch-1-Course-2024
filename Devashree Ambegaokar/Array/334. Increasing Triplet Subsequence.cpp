class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if (nums.size() < 3) return false;

        int first = INT_MAX, second = INT_MAX;

        for (int i : nums) {
            if (i <= first) {
                first = i;  
            } else if (i <= second) {
                second = i;
            } else {
                return true;
            }
        }

        return false;
    }
};
//Time complexity = O(n) and Space complexity = O(1)
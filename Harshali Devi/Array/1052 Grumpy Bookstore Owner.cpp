//Day 18
//https://leetcode.com/problems/grumpy-bookstore-owner/description/

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        
        int n = customers.size();
        int initial_satisfied = 0;
        
        // Step 1: Calculate the initial satisfied customers when the owner is not grumpy
        for (int i = 0; i < n; ++i) {
            if (grumpy[i] == 0) {
                initial_satisfied += customers[i];
            }
        }
        
        // Step 2: Calculate the maximum additional satisfied customers using the sliding window technique
        int additional_satisfied = 0;
        int max_additional_satisfied = 0;
        
        // Calculate the sum for the first window of size 'minutes'
        for (int i = 0; i < minutes; ++i) {
            if (grumpy[i] == 1) {
                additional_satisfied += customers[i];
            }
        }
        
        max_additional_satisfied = additional_satisfied;
        
        // Slide the window from start to end
        for (int i = minutes; i < n; ++i) {
            if (grumpy[i] == 1) {
                additional_satisfied += customers[i];
            }
            if (grumpy[i - minutes] == 1) {
                additional_satisfied -= customers[i - minutes];
            }
            max_additional_satisfied = max(max_additional_satisfied, additional_satisfied);
        }
        
        // The final result is the sum of initially satisfied customers and the best additional customers we can gain
        return initial_satisfied + max_additional_satisfied;
    }
};

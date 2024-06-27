//Day 17
//Question 79
//https://leetcode.com/problems/most-profit-assigning-work/description/


class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>> difficult_profit(difficulty.size());

        for (size_t i = 0; i < difficulty.size(); ++i) {
            difficult_profit[i] = {difficulty[i], profit[i]};
        }

        sort(difficult_profit.begin(), difficult_profit.end());

        // Preprocess to get the maximum profit at each difficulty level     -> IMP STEP
        for (int i = 1; i < difficult_profit.size(); ++i) {
            difficult_profit[i].second = max(difficult_profit[i].second, difficult_profit[i - 1].second);
        }

        int output = 0;

        for (int ability : worker) {
            int left = 0;
            int right = difficult_profit.size() - 1;
            int bestProfit = 0;

            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (difficult_profit[mid].first <= ability) {
                    bestProfit = difficult_profit[mid].second; // Update bestProfit
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }

            output += bestProfit;
        }

        return output;
    }
};

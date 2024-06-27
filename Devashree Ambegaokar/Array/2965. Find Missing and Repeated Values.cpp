
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> arr;
        unordered_map<int, int> mp;

        for (const auto& row : grid) {
            for (int element : row) {
                arr.push_back(element);
            }
        }

        for (int x : arr) {
            mp[x]++;
        }

        int repeated = -1;
        int missing = -1;

        for (const auto& i : mp) {
            if (i.second == 2) {
                repeated = i.first;
                break;
            }
        }

        int n = grid.size();
        for (int i = 1; i <= n * n; ++i) {
            if (mp.find(i) == mp.end()) {
                missing = i;
                break;
            }
        }

        return {repeated, missing};
    }
};

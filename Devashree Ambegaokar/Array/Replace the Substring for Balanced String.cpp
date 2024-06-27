class Solution {
public:
    int balancedString(string s) {
        int arr[26] = {0}; // Since there are only 'Q', 'W', 'E', 'R', we can use an array of size 26
        for (char a : s) {
            arr[a - 'A']++;
        }
        
        int target = s.length() / 4;
        int l = 0;
        int result = s.length(); // Initialize it as the length of the string, i.e., the worst case
        
        for (int r = 0; r < s.length(); r++) {
            arr[s[r] - 'A']--;
            while (l < s.length() && arr['Q' - 'A'] <= target && arr['W' - 'A'] <= target &&
                   arr['E' - 'A'] <= target && arr['R' - 'A'] <= target) {
                arr[s[l] - 'A']++;
                result = min(result, r - l + 1);
                l++;
            }
        }
        
        return result;
    }
};
//time complexity = O(n) and space complexity = O(1)
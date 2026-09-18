class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> pos(128, -1);
        int ans = 0, l = 0;
        
        for (int r = 0; r < s.length(); ++r) {
            if (pos[s[r]] >= l) {
                l = pos[s[r]] + 1;
            }
            pos[s[r]] = r;
            ans = max(ans, r - l + 1);
        }
        
        return ans;
    }
};
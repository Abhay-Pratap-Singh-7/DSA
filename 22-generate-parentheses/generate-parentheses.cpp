class Solution {
private:
    void backtrack(int open, int close, int n, string& curr, vector<string>& res) {
        if (curr.size() == 2 * n) {
            res.push_back(curr);
            return;
        }
        if (open < n) {
            curr.push_back('(');
            backtrack(open + 1, close, n, curr, res);
            curr.pop_back();
        }
        if (close < open) {
            curr.push_back(')');
            backtrack(open, close + 1, n, curr, res);
            curr.pop_back();
        }
    }

public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string curr;
        curr.reserve(2 * n);
        backtrack(0, 0, n, curr, res);
        return res;
    }
};
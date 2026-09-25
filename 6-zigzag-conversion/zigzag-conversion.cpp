using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1 || s.length() <= numRows) {
            return s;
        }

        vector<string> rows(numRows);
        int curRow = 0;
        int step = -1;

        for (char c : s) {
            rows[curRow] += c;
            
            if (curRow == 0 || curRow == numRows - 1) {
                step = -step;
            }
            
            curRow += step;
        }

        string ans = "";
        for (const string& row : rows) {
            ans += row;
        }

        return ans;
    }
};
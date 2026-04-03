class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> m;

        for (auto& v : matches) {
            int w = v[0], l = v[1];
            if (m.find(w) == m.end())
                m[w] = 0; 
            m[l]++;       
        }

        vector<int> a, b;
        for (auto& [p, c] : m) {
            if (c == 0)
                a.push_back(p); 
            else if (c == 1)
                b.push_back(p); 
        }

        return {a, b};
    }
};

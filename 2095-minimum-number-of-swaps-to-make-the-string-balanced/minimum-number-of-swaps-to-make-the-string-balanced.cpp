class Solution {
public:
    int minSwaps(string s) {
        int balance = 0;
        int max_imbalance = 0;

        for (char c : s) {
            if (c == '[') {
                balance++;
            } else {
                balance--;
            }

            if (balance < 0) {
                max_imbalance = std::max(max_imbalance, -balance);
            }
        }
        return (max_imbalance + 1) / 2;
    }
};
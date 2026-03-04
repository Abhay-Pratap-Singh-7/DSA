class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int result = 0;

        int rows = mat.size();
        int cols = mat[0].size();

        vector<int> rowSums(rows, 0);
        vector<int> colSums(cols, 0);

        for (int i = 0; i < rows; i++) {
            int currentRowSum = 0;
            for (int j = 0; j < cols; j++) {
                currentRowSum += mat[i][j];
                colSums[j] += mat[i][j];
            }
            rowSums[i] = currentRowSum;
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (mat[i][j] == 1 && rowSums[i] == 1 && colSums[j] == 1)
                    result++;
            }
        }
        return result;
    }
};
#include<iostream>
using namespace std;

vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for (int i = 0; i < numRows; i++) {
            vector<int> row;
            for (int j = 0; j <= i; j++) {
                row.push_back(nCr(i, j));
            }
            result.push_back(row);
        }
        return result;
    }
    long long nCr(int n, int r) {
        if (r > n - r)
            r = n - r;
        long long ans = 1;
        for (int i = 0; i < r; i++) {
            ans = ans * (n - i) / (i + 1);
        }
        return ans;
    }

int main()
{
    int n = 5;
    vector<vector<int>> result = generate(n);
    for ( auto i : result ) {
        for ( auto j : i ) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
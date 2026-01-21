#include<iostream>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
        int result = 0;
        int i = 0; int j = 0;
        sort ( g.begin(), g.end() );
        sort ( s.begin(), s.end() );
        while ( i < g.size() && j < s.size() ) {
            if ( g[i] <= s[j] ) {
                result++;
                i++;
                j++;
            }
            else {
                j++;
            }
        }
        return result;
    }

int main()
{
    vector<int> g = {1,2,3};
    vector<int> s = {1,1};
    cout << findContentChildren(g, s);
    return 0;
}
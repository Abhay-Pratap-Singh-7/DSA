#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    unordered_map<int, int> counts;
    for ( auto i : arr ) {
        counts[i]++;
    }
    set<int> unique;
    for ( auto [k, v] : counts ) {
        if ( !unique.insert(v).second ) return false;
    }
    return true;
}

int main()
{
    vector<int> arr = {1, 2};
    cout << uniqueOccurrences(arr);
    return 0;
}
#include<iostream>
using namespace std;

vector<int> countBits(int n) {
        vector<int> result;
        bitset<32> b;
        for ( int i = 0; i <= n; i++ ) {
            bitset<32> b(i);
            result.push_back( b.count() );
        }
        return result;
    }

int main()
{
    int n = 10;
    vector<int> result = countBits(n);
    for ( auto i : result ) cout << i << endl;
    return 0;
}
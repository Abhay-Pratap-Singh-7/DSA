#include<iostream>
using namespace std;
void reverseString(vector<char>& s) {
        for ( int i = 0; i < s.size() / 2; i++ ){
            swap(s[i], s[s.size()-i-1]);
        }
    }

int main()
{
    vector<char> s = {'h','e','l','l','o'};
    reverseString(s);
    for ( auto i : s ){
        cout << i << " ";
    }
    return 0;
}
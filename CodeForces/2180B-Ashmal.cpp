#include<iostream>
using namespace std;

string lexicographically(string arr[]) {
    
}

int main()
{
    int n;
    cin >> n;
    string result[n];
    for ( int i = 0; i < n; i++ ) {
        int temp;
        cin >> temp;
        string arr[temp];
        for ( int j = 0; j < temp; j++ ) {
            cin >> arr[j];
        }
        result[i] = lexicographically(arr);
    }
    return 0;
}
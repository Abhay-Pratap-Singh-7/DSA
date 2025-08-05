#include <iostream>
using namespace std;

int main(){

    cout << endl;

    vector<int> arr = {0,1,2,3,2,1,2,3,2,1,2,3,4,5,4,3,2,3,4,5,6,7,4,3,2};

    int maxi = *max_element(arr.begin(), arr.end());

    vector<int> hash(maxi);

    for ( int i = 0; i < arr.size(); i++){
        hash[arr[i]] += 1;
    }

    for ( auto i : hash ){
        cout << i << endl;
    }

    cout << endl;

    int maximum = INT_MIN;
    for ( int i = 0; i <= maxi; i++ ){
        if ( maximum < hash[i] ) maximum = hash[i];
    }

    for( int i = 0; i <= maxi; i++){
        if ( hash[i] == maximum ){
            cout << i << endl;
        }
    }

    cout << endl;

}
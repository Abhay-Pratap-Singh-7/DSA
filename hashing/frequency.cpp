#include <iostream>
using namespace std;

int main(){

    vector<int> arr = {1,4,2,2,6,3,8,0,1,2,3,4,3,2,1,2,3};
    int maxi = *max_element(arr.begin(), arr.end());

    int hash[maxi];
    for( int i = 0; i <= maxi; i++){
        hash[arr[i]] += 1;           
    }

    cout << hash[1] << endl;
}
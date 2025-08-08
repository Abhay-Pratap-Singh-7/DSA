// The element should occur more then n/2

#include <iostream>
using namespace std;

// Brute TC= O(n^2)
int getMajor(vector<int> &arr){
    int count = 0;
    for ( int i = 0; i < arr.size(); i++ ){
        count = 0;
        for ( int j = 0; j < arr.size(); j++ ){
            if ( arr[i] == arr[j] ) {
                count++;
            }
        }
        if ( count > (arr.size() / 2 ) ){
            return arr[i];
        }
    }
    return -1;
}

// better ( all entities of hash array should be initialized with 0;)
int getMajor_M2(vector<int> &arr){
    int hash[*max_element(arr.begin(), arr.end())];
    for ( int i = 0; i < arr.size(); i++ ){
        hash[arr[i]]++;
    }
    for ( int i = 0; i < *max_element(arr.begin(), arr.end()); i++ ){
        if ( hash[i] > (arr.size() / 2)){
            return i;
        }
    }
    return -1;
}

// Optimal TC = O(n)
int getMajor_M3(vector<int> &arr){
    int count = 1;
    int element = arr[0];
    for ( int i = 0; i < arr.size(); i++ ){
        if ( arr[i] == element ){
            count++;
        }
        else {
            count--;
        }
        if ( count == 0 ){
            element = arr[i];
            count = 1;
        }
    }
    return -1;
}

int main(){

    cout << endl;

    vector<int> arr = {1,2,3};

    cout << getMajor(arr) << endl;
    cout << getMajor_M2(arr) << endl;
    cout << getMajor_M3(arr) << endl;
    cout << endl;


}
#include <iostream>
using namespace std;

// Brute TC = O(n^2)
int getFreqOne_M1(vector<int> &arr){
    int flag;
    for ( int i = 0; i < arr.size(); i++ ){
        flag = 0;
        for ( int j = 0; j < arr.size(); j++ ){
            if ( arr[i] == arr[j] && i != j ){
                flag = 1;
            }
        }
        if ( flag == 0 ){
            return arr[i];
        }
    }
    return -1;
}

// optimal TC = O(n)
int getFreqOne_M2(vector<int> &arr){
    int xOR = 0;
    for ( int i = 0; i < arr.size(); i++ ){
        xOR ^= arr[i];
    }
    if ( xOR == 0 ) return -1;
    return xOR;
}

int main(){

    cout << endl;

    vector<int> arr = {1,1,2,2,3,3,4,4};

    cout << getFreqOne_M1(arr) << endl;
    cout << getFreqOne_M2(arr) << endl;

    cout << endl;

}
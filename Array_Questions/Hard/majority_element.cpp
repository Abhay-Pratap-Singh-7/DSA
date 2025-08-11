// element which occur in array more than n/3 times

#include <iostream>
#include <map>
using namespace std;

// Brute TC = O(n^2)
int getMajor(vector<int> &arr){
    int count;
    int n = arr.size();
    for ( int i = 0; i < n; i++ ){
        count = 0;
        for ( int j = 0; j < n; j++ ){
            if ( arr[i] == arr[j] ){
                count++;
            }
        }
        if ( count > n / 3 ) {
            return arr[i];
        }
    }
    return -1;
}


int main(){

    cout << endl;

    vector<int> arr = {3,3,2,2,2,4,4,4,4};

    cout << getMajor(arr) << endl;

    cout << endl;

}
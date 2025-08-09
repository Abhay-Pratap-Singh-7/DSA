#include <iostream>
using namespace std;

// Brute TC = O(2n)
void arrangeAlternate(vector<int> &arr){
    int positive[arr.size()/2];
    int negative[arr.size()/2];
    int pos = 0;
    int neg = 0;
    for ( int i = 0; i < arr.size(); i++ ){
        if ( arr[i] >= 0 ){
            positive[pos] = arr[i];
            pos++;
        }
        else {
            negative[neg] = arr[i];
            neg++;
        }
    }
    pos = 0;
    neg = 0;
    for ( int i = 0; i < arr.size(); i += 2 ){
        arr[i] = positive[pos];
        arr[i+1] = negative[neg];
        pos++;
        neg++;
    }
}


int main(){

    cout << endl;

    vector<int> arr = {28,-41,22,-8,-37,46,35,-9,18,-6,19,-26,-37,-10,-9,15,14,31};

    arrangeAlternate(arr);

    for ( auto i : arr ){
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

}
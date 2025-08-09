#include <iostream>
using namespace std;

void nextPermutation(vector<int> &arr){
    int n = arr.size();
    int last = -1;
    for ( int i = n-2; i >= 0; i-- ){
        if ( arr[i] < arr[i+1] ){
            last = i;
            break;
        }
    }
    cout << last;
    if ( last == -1 ){
        reverse(arr.begin(), arr.end());
        return;
    }
    int exchanger = 0;
    for ( int i = n-1; i >= 0; i-- ){
        if ( arr[i] > arr[last] ){
            exchanger = i;
            break;
        }
    }
    cout << " " << exchanger << endl;
    swap ( arr[last], arr[exchanger] );
    sort(arr.begin()+last+1, arr.end());
}

int main(){

    cout << endl;

    vector<int> arr = {1,3,2};

    nextPermutation(arr);

    for ( auto i : arr ){
        cout << i << " ";
    }

    cout << endl;
    cout << endl;

}
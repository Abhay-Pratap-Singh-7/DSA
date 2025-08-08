#include <iostream>
using namespace std;

void reverse(vector<int> &arr, int low, int high){
    while ( low < high ){
        swap ( arr[low], arr[high-1] );
        low++;
        high--;
    }
}

void rightShift(vector<int> &arr, int t){
    int k = arr.size() - t;
    reverse(arr, 0 , k);
    reverse(arr, k, arr.size());
    reverse(arr, 0, arr.size());
}

int main(){

    cout << endl;

    vector<int> nums = {1,2,3,4,5};
    int k = 3;

    rightShift(nums, k);

    for ( auto i : nums ){
        cout << i << " ";
    }

    cout << endl;
    cout << endl;
}
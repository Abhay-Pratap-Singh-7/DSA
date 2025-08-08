#include <iostream>
using namespace std;

// Brute
int getSLargestM1(vector<int> &arr, int size){
    sort(arr.begin(), arr.end());
    for ( int i = size - 2; i >= 0; i-- ){
        if ( arr[i] < arr[size-1] ){
            return arr[i];
        }
    }
}

// Better
int getSLargestM2(vector<int> &arr, int size){
    int max = *max_element(arr.begin(), arr.end());
    int smax = arr[0];
    for ( int i = 0; i < size - 1; i++ ){
        if ( smax < arr[i] && arr[i] < max ) smax = arr[i];
    }
    return smax;
}

// Optimal
int getSLargestM3(vector<int> &arr, int size){
    int max = arr[0];
    int smax = INT_MIN;
    for ( int i = 0; i < size; i++ ){
        if ( arr[i] > max ){
            smax = max;
            max = arr[i];
        }
    }
    return smax;
}

int main(){

    cout << endl;

    // taking array as input
    vector<int> arr;
    cout << "Enter number of elements: ";
    int size;
    cin >> size;
    for ( int i = 0; i < size; i++ ){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    // calling method 1
    cout << getSLargestM1(arr, size) << endl;

    // calling method 2
    cout << getSLargestM2(arr, size) << endl;

    // calling method 3
    cout << getSLargestM3(arr, size) << endl;

    cout << endl;

}
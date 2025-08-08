#include <iostream>
using namespace std;

// simple
int getLargestM1(vector<int> &arr, int size){
    return *max_element(arr.begin(), arr.end());
}

// Brute
int getLargestM2(vector<int> &arr, int size){
    sort(arr.begin(), arr.end());
    return arr[size - 1];
}

// Optimal
int getLargestM3(vector<int> &arr, int size){
    int max = arr[0];
    for ( int i = 0; i < size; i++ ){
        if( max < arr[i] ) max = arr[i];
    }
    return max;
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
    int largestM1 = getLargestM1(arr, size);

    // calling method 2
    int largestM2 = getLargestM2(arr, size);

    // calling method 3
    int largestM3 = getLargestM3(arr, size);

    // output
    cout << largestM1 << endl;
    cout << largestM2 << endl;
    cout << largestM3 << endl;

    cout << endl;
}
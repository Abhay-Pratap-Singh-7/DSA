
// there are three methods use only one at a time

#include <iostream>
using namespace std;

// brute method TC = O(2n) SC = O(n)(worst)
void zeroToEnd(vector<int> &arr, int size){
    vector<int> temp;
    for ( int i = 0; i < size; i++ ){
        if ( arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }
    for ( int i = 0; i < temp.size(); i++ ){
        arr[i] = temp[i];
    }
    for ( int i = temp.size(); i < size; i++ ){
        arr[i] = 0;
    }
}

// better TC = O(n+x) O(2n)(worst) when all zeros SC = O(2);
void zeroToEnd_M2(vector<int> &arr, int size){
    int first = 0;
    int count = 0;
    for ( int i = 0; i < size; i++ ){
        if ( arr[i] != 0 ){
            arr[first] = arr[i];
            first++;
        }
        else count++;
    }
    for ( int i = size - count; i < size; i++ ){
        arr[i] = 0;
    }
}

// optimal TC = O(n) SC = O(1)
void zeroToEnd_M3(vector<int> &arr, int size){
    int j;
    for ( int i = 0; i < size; i++ ){
        if ( arr[i] == 0){
            j = i;
            break;
        } 
    }
    for ( int i = j + 1; i < size; i++){
        if ( arr[i] != 0 ){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){

    cout << endl;

    // taking array as input
    vector<int> arr;
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    for ( int i = 0; i < size; i++ ){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    // calling method 1
    // zeroToEnd(arr, size);

    // calling method 2
    // zeroToEnd_M2(arr, size);

    // calling method 3
    zeroToEnd_M3(arr, size);

    // output
    for ( auto i : arr ){
        cout << i << " ";
    }

    cout << endl;
    cout << endl;

}
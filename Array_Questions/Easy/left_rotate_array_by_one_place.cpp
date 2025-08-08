#include <iostream>
using namespace std;

void rotate(vector<int> &arr, int size){
    int first = arr[0];
    for ( int i = 0; i < size - 1; i++ ){
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = first;
}

int main(){

    cout << endl;

    // taking array as input
    vector<int> arr;
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    for ( int i = 0; i < size; i++ ){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    // calling rotate function
    rotate(arr, size);

    // output
    for ( auto i : arr ){
        cout << i << " ";
    }

    cout << endl;
    cout << endl;

}
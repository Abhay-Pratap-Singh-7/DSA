#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    for ( int i = 0; i < size; i++ ){
        if ( arr[i] == key ){
            return i;
        }
    }
    return -1;
}

int main(){

    cout << endl;

    // taking array as input and also key
    cout << "Enter size of array: ";
    int size;
    cin >> size;
    int arr[size];
    for ( int i = 0; i < size; i++ ){
        cin >> arr[i];
    }
    cout << "Enter the element to find: ";
    int key;
    cin >> key;

    // calling binary search function
    cout << binarySearch(arr, size, key) << endl;
    cout << endl;

}
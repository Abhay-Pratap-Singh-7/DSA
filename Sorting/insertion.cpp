#include <iostream>
using namespace std;

int main(){

    cout << endl;

    // taking array as input
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    for ( int i = 0; i < size; i++ ){
        cin >> arr[i];
    }

    // insertion sort
    for ( int i = 0; i < size; i++ ){
        int j = i;
        while ( j > 0 && arr[j-1] > arr[j] ){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }

    // output
    for ( auto i : arr ){
        cout << i << " ";
    }

    cout << endl;
    cout << endl;

}
#include <iostream>
using namespace std;

int main(){

    cout << endl;

    // taking array as input
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    for( int i = 0; i < size; i++){
        cin >> arr[i];
    }

    // bubble sort
    for ( int i = size-1; i > 0; i-- ){
        for ( int j = 0; j < i; j++ ){
            if ( arr[j] > arr[j+1] ){
                swap( arr[j], arr[j+1]);
            } 
        }
    }

    // output
    for ( auto i : arr ){
        cout << i << " ";
    }

    cout << endl;
    cout << endl;

}
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

    // selection sort
    for ( int i = 0; i < size - 1; i++ ){
        int min = i;
        for ( int j = i; j < size; j++){
            if ( arr[min] > arr[j]){
                min = j;
            }
            swap(arr[i], arr[min]);   
        }
    }

    // output
    for ( auto i : arr ){
        cout << i << " ";
    }

    cout << endl;
    cout << endl;


}
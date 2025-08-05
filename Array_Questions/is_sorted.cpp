#include <iostream>
using namespace std;

bool isSort(vector<int> &arr, int size){
    int max = *max_element(arr.begin(), arr.end());
    if ( max > arr[0] ){
        for ( int i = 0; i < size-1; i++ ){
            if ( arr[i] > arr[i+1] ) return false;
        }
        return true;
    }
    else if ( max == arr[0] ){
        for ( int i = size - 1; i > 0; i-- ){
            if ( arr[i] < arr [i+1] ) return false;
        }
        return true;
    }
    else return false;
}

int main(){

    cout << endl;
    
    // taking array as input
    vector<int> arr;
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    for ( int i = 0 ; i < size; i++ ){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    if ( isSort(arr, size) ){
        cout << "Array is Sorted" << endl;
    }
    else {
        cout << "Array is not Sorted" << endl;
    }

    cout << endl;

}
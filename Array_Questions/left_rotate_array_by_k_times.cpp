
// there are three methods use one at a time

#include <iostream>
using namespace std;

// TC = O(k + size) SC = O(k)
void rotateKTimes_M2(vector<int> &arr, int size, int k){
    vector<int> temp;
    for ( int i = 0; i < k; i++ ){
        temp.push_back(arr[i]);
    }
    for ( int i = 0; i < size - k; i++ ){
        arr[i] = arr[k + i];
    }
    for ( int i = 0; i < k; i++ ){
        arr[size - k + i] = temp[i];
    }
}

// TC = O(k*(size-1)) SC = [1]
void rotateKTimes_M1(vector<int> &arr, int size, int k){
    for ( int i = 0; i < k; i++ ){
        int first = arr[0];
        for ( int j = 0; j < size - 1; j++){
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = first;
    }
}

// optimal TC = O(2Size) SC = O(1)
void reverse(vector<int> &arr, int low, int high){
    while ( low < high ){
        swap(arr[low], arr[high-1]);
        low++;
        high--;
    }
    for ( auto i : arr ){
        cout << i << " ";
    }
    cout << endl;
}
void rotateKTime_M3(vector<int> &arr, int size, int k){
    reverse(arr, 0, k);
    reverse(arr, k, size);
    reverse(arr, 0, size);
}

int main(){

    cout << endl;

    // taking array as input
    vector<int> arr;
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int k;
    cout << "Enter number of times array rotate: ";
    cin >> k;
    cout << "Enter elements of array: " << endl;
    for ( int i = 0; i < size; i++ ){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    // cause by rotating array size * times, it become original array
    if ( k >= size ){
        k = k % size;
    }


    // calling k times rotate function
    // rotateKTimes_M1(arr, size, k);

    // // calling method 2 for k times rotate 
    // rotateKTimes_M2(arr, size, k);

    // calling method 3 for k times rotate
    rotateKTime_M3(arr, size, k);

    // output
    for ( auto i : arr ){
        cout << i << " ";
    }

    cout << endl;
    cout << endl;

}
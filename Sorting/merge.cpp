#include <iostream>
using namespace std;

void doMerge(vector<int> &arr, int low, int mid, int high){
    int left = low;
    int right = mid+1;
    vector<int> temp;
    while( left <= mid && right <= high ){
        if ( arr[left] <= arr[right] ){
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while ( left <= mid ){
        temp.push_back(arr[left]);
        left++;
    }
    while ( right <= high ){
        temp.push_back(arr[right]);
        right++;
    }
    for ( int i = low; i <= high; i++ ){
        arr[i] = temp[i-low];
    }
}

void mergeSort(vector<int> &arr, int low, int high){
    if ( low >= high ) return;
    int mid = low + (high-low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    doMerge(arr, low, mid, high);
}


int main(){

    cout << endl;

    // input
    vector<int> arr = {56, 45, 78, 34 ,67};


    // calling merge sort function
    mergeSort(arr, 0, arr.size()-1);

    // output
    for ( auto i : arr ){
        cout << i << " ";
    }

    cout << endl;
    cout << endl;

}
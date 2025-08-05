#include <iostream>
using namespace std;

int getPartition(vector<int> &arr, int low, int high){

    int pivot = arr[low];
    int left = low;
    int right = high;

    while ( left < right ){
        while ( arr[left] <= pivot && left < high ) left++;
        while ( arr[right] > pivot && right > low ) right--;
        if ( left < right ){
            swap(arr[left], arr[right]);
        }
    }
    swap(arr[low], arr[right]);
    return right;
    
}

void quickSort(vector<int> &arr, int low, int high){

    if ( low < high ){
        int partition = getPartition(arr, low, high);
        quickSort(arr, low, partition-1);
        quickSort(arr, partition+1, high);
    }

}

int main(){

    cout << endl;

    vector<int> arr = {34, 56, 45, 78, 67};

    quickSort(arr, 0, 4);

    for( auto i : arr ){
        cout << i << " ";
    }

    cout << "heinnnnn" << endl;
    cout << endl;
    cout << endl;

}
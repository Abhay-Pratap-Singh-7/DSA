#include <iostream>
using namespace std;

void sortArray(vector<int> &arr){
    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;

    for ( int i = 0; i < arr.size(); i++ ){
        if ( arr[i] == 0 ){
            count_0 += 1;
        }
        else if ( arr[i] == 1 ){
            count_1 += 1;
        }
        else {
            count_2 += 1;
        }
    }
    for ( int i = 0; i < count_0; i++ ){
        arr[i] = 0;
    }
    for ( int i = count_0; i < count_0 + count_1; i++ ){
        arr[i] = 1;
    }
    for ( int i = count_0 + count_1; i < count_0 + count_1 + count_2; i++ ){
        arr[i] = 2;
    }
}

// Optimal TC = O(n)
void sortArray_M2(vector<int> &arr){
    int low = 0;
    int mid = 0;
    int high = arr.size()-1;
    int steps = 0;
    while ( mid <= high ){
        if ( arr[mid] == 0 ){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if ( arr[mid] == 1 ){
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){

    cout << endl;

    vector<int> arr = {0,1,2,0,1,2,0,1,2};

    sortArray_M2(arr);

    for ( auto i : arr ){
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

}
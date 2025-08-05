#include <iostream>
#include <set>
using namespace std;

void removeDuplicate_M1(vector<int> &arr, int size){

    // temp set to store unique values
    set<int> temp;
    for( int i = 0; i < size; i++ ){
        temp.insert(arr[i]);
    }

    // inserting unique elements in starting of original array
    int index = 0;
    for ( auto i : temp ){
        arr[index] = i;
        index++;
    }

    // removing duplicate elements from original array
    for ( int i = index; i < size; i++ ){
        arr.pop_back();
    }

}

void removeDuplicate_M2(vector<int> &arr, int size){
    
}

int main(){

    cout << endl;

    // taking array as input
    vector<int> arr;
    int size;
    cout << "Enter the size of array; ";
    cin >> size;
    for ( int i = 0; i < size; i++ ){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    // calling function to remove duplicates
    removeDuplicate_M1(arr, size);

    // output
    for ( auto i : arr ){
        cout << i << " ";
    }

    cout << endl;
    cout << endl;
}
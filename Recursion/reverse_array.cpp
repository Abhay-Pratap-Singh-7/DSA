#include <iostream>
using namespace std;

void reverseArray(int size, int *arr, int count){
    if( count >= size/2 ){
        return;
    }
    else{
        swap(arr[count], arr[size-count-1]);
        reverseArray(size, arr, count+1);
    } 
        
}

int main(){

    // taking array as input
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    for( int i = 0; i < size; i++){
        cin >> arr[i];
    }

    // using temporary varible for counting
    int count = 0;

    // calling reverse array function
    reverseArray(size, arr, count);

    // printing reversed array
    for ( int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}
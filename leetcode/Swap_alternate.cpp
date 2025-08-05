#include <iostream>
using namespace std;

int main(){

    // initialising an array
    int size;
    cout << "Enter number of elements in an Array : ";
    cin >> size;
    int arr[size];

    // taking input in the array
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    // swaping alternate elements in array
    if(size % 2 == 0){
        for(int i = 0; i < size; i += 2){
            int temp;
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    else {
        for(int i = 0; i < size-1; i += 2){
            int temp;
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    // printing the final array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;


}
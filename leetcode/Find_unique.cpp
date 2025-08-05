#include <iostream>
using namespace std;

int getUnique(int *arr, int size){
    int count;
    for(int i = 0; i < size; i++){
        count = 0;
        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count < 2){
            return arr[i];
        }
    }
    return 0;
}

int main(){

    int size = 11;
    int arr[11] = {3,5,7,3,1,5,6,2,1,7,2};

    // calling getUnique Function
    int unique = getUnique(arr, size);
    cout << unique << endl;


}
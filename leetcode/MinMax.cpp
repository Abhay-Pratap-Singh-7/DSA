#include <iostream>
using namespace std;

int getMax(int num[], int size){

    // setting minimum value to compare others
    int max = INT_MIN;

    // comparing element with max, if greater then max = that number
    for(int i = 0; i < size; i++){
        if(num[i] >= max){
            max = num[i];
        }
    }

    return max;

}

int getMin(int num[], int size){

    // setting minimum value to compare others
    int min = INT_MAX;

    // comparing element with max, if greater then max = that number
    for(int i = 0; i < size; i++){
        if(num[i] <= min){
            min = num[i];
        }
    }

    return min;

}

int main(){

    int size;
    cin >> size;

    int num[100];

    //taking input in array
    for(int i = 0; i < size; i++){
        cin >> num[i];
    }

    cout << getMax(num, size) << endl;
    cout << getMin(num, size) << endl;

}
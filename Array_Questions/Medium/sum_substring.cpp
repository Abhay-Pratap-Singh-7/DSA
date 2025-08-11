#include <iostream>
using namespace std;

// Brute TC = O(n^2)
int substring(vector<int> &arr, int sum){
    int temp = 0;
    int count = 0;
    for ( int i = 0; i < arr.size(); i++ ){
        temp = 0;
        for ( int j = i; j < arr.size(); j++ ){
            temp += arr[j];
            if ( temp == sum ){
                count++;
            }
        }
    }
    return count;
}

// Optimal
int substring_M2(vector<int> &arr, int sum){
    return 0;
}

int main(){

    cout << endl;

    vector<int> arr = {1,2,3,-3,1,1,1,4,2,-3};
    int sum = 3;

    cout << substring(arr, sum) << endl;
    cout << endl;
    
}
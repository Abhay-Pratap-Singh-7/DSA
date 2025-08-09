#include <iostream>
using namespace std;

// Brute TC =O(n^2)
int getLeader(vector<int> &arr){
    int leader = 0;
    int flag;
    for ( int i = 0; i < arr.size() - 1; i++ ){
        flag = 0;
        for ( int j = i + 1; j < arr.size(); j++ ){
            if ( arr[j] > arr[i] ) flag = 1;
        }
        if ( flag == 0 ){
            return arr[i];
        }
    }
    return -1;
}

// Optimal TC = O(n)
int getLeader_M2(vector<int> &arr){
    int leader = arr[0];
    for ( int i = 1; i < arr.size(); i++ ){
        if ( arr[i] > leader ){
            leader = arr[i];
        } 
    }
    return leader;
}

int main(){

    cout << endl;

    vector<int> arr = {10, 22, 12, 3, 0, 6};

    cout << getLeader(arr) << endl;
    cout << getLeader_M2(arr) << endl;

    cout << endl;

}
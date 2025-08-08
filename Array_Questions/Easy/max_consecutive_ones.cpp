#include <iostream>
using namespace std;

// TC = O(n) SC = O( number of ones at different locations )
int maxConsecutiveOnes_M1(vector<int> &arr){
    vector<int> hash;
    int j = 0;
    for ( int i = 0; i < arr.size(); i++ ){
        int count = 0;
        while ( arr[i] != 1 ){
            i++;
        }
        while ( arr[i] == 1 ){
            count++;
            i++;
        }
        j++;
        hash.push_back(count);
    }
    return *max_element(hash.begin(), hash.end());
}

// Optimal TC = O(n)
int maxConsecutiveOnes_M2(vector<int> &arr){
    int max = 0;
    int count = 0;
    for ( int i = 0; i < arr.size(); i++ ){
        if ( arr[i] == 1 ){
            count++;
        }
        else {
            count = 0;
        }
        if ( count > max ){
            max = count;
        }
    }
    return max;
}

int main(){

    cout << endl;

    vector<int> arr = {1,2,3,1,1,1,1,5,6,5,6};

    cout << maxConsecutiveOnes_M1(arr) << endl;
    cout << maxConsecutiveOnes_M2(arr) << endl;
    cout << endl;

}
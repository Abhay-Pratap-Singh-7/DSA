#include <iostream>
using namespace std;

// Brute TC = O(n^2)
int getMissing_M1(vector<int> &num, int size){
    for ( int i = 1; i <= size; i++ ){
        int flag = 0;
        for ( int j = 0; j < num.size(); j++ ){
            if ( i == num[j] ){
                flag = 1;
                break;
            }
        }
        if ( flag == 0 ){
            return i;
        }
    }
    return -1;
}

//better TC = O(2n) SC = O(n)
int getMissing_M3(vector<int> &num, int size){
    int hash[size+1];
    for ( int i = 0; i < num.size(); i++ ){
        hash[num[i]] = 0;
        hash[num[i]]++;
    }
    for ( int i = 1; i < size + 1; i++ ){
        if ( hash[i] != 1 ){
            return i;
        }
    }
    return -1;

}

// Optimal TC = O(n-1)
int getMissing_M2(vector<int> &num, int size){
    int j = 1;
    for ( int i = 0; i < size; i++ ){
        if ( num[i] == j ){
            j++;
        }
        else {
            return j;
        }
    }
    return -1;
}

// Optimal 
int getMissing_M4(vector<int> &num, int size){
    int sum = (size * (size + 1)) / 2;
    int temp = 0;
    for ( int i = 0; i < num.size(); i++ ){
        temp += num[i];
    }
    if ( (sum - temp) == 0 ) return -1;
    return (sum - temp);
}

// Optimal
int getMissing_M5(vector<int> &num, int size){
    int xor1 = 0;
    int xor2 = 0;
    if ( num.size() == size ) return -1;
    for ( int i = 0; i < num.size(); i++ ){
        xor1 ^= (i + 1);
        xor2 ^= num[i];
    } 
    xor1 = xor1 ^ size;
    return (xor1 ^ xor2);
}

int main(){

    cout << endl;

    vector<int> num = {1,2,3,4,5};
    int size = 5;

    cout << getMissing_M1(num, size) << endl;
    cout << getMissing_M2(num, size) << endl;
    cout << getMissing_M3(num, size) << endl;
    cout << getMissing_M4(num, size) << endl;
    cout << getMissing_M5(num, size) << endl;


    
    cout << endl;

}
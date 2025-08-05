#include <iostream>
#include <vector>

using namespace std;

int closestPrime(int left, int right){

    vector<int> prime;
    int flag;
    for ( int i = left + 1; i < right; i++){
        flag = 0;
        for ( int j = 2; j < i/2; j++){
            if ( i % j == 0 ) continue;
        }
        if ( flag == 1 ) prime.push_back(i);
    }
    for ( auto i : prime ){
        cout << i << " ";
    }
    cout << endl;

}

int main(){

    int left = 10;
    int right = 19;

    closestPrime(left, right);

}
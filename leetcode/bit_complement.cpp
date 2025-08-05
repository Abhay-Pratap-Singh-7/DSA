#include <iostream>
using namespace std;

int bitComplement(int n);

int main(){
    int n;
    cin >> n;
    return bitComplement(n);
}

int bitComplement(int n){
    int comp = 0;
    int count = 0;
    while( n != 0 ){
        int bit = n & 1;
        if (bit == 1){
            bit = 0;
        }
        else{
            bit = 1;
        }
        comp += pow(2,count)*bit;
        count++;
        n = n >> 1;
    }
    cout << comp;
}
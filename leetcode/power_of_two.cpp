#include <iostream>
using namespace std;

bool isPowerOfTwo(int n);

int main(){
    int n;
    cin >> n;
    bool temp = isPowerOfTwo(n);
    cout << temp;
}

bool isPowerOfTwo(int n) {
        int flag = 0;
        while(n != 0){
            int rem = n % 2;
            if(rem == 1){
                flag += 1;
            }
            n /= 2;
        }
        if(flag == 1){
            return true;
        }
        else {
            return false;
        }
    }

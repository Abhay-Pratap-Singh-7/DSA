#include <iostream>
using namespace std;
int main() {
    
    int n = 43261596;
    int sum = 0;
    for(int i = 0; i < 32; i++){
        int rem = n % 2;
        sum += rem * pow(2,(31-i));
        n /= 2;
    }
    cout << sum << endl;
    return 0;
}
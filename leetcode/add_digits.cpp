#include <iostream>
using namespace std;

int addDigits(int n);

int main(){
    int n;
    cout << "Enter any number : ";
    cin >> n;
    cout << addDigits(n) << endl;
    return 0;
}

int addDigits(int num) {
    int sum = 0;
    while(true){
        sum = 0;
        while(num != 0){
            int rem = num % 10;
            sum += rem;
            num /= 10;
        }
        if(sum <= 9 && sum >= 0)break;
        num = sum;
    }
    return sum;
}
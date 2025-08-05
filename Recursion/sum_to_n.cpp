#include <iostream>
using namespace std;

int getSum(int n, int sum){

    if( n < 1){
        cout << sum << endl;
        return 0;
    }
    else {
        getSum(n-1, sum+n);
    }
    return 0;
}

int main(){

    int n;
    cout << "Enter number: ";
    cin >> n;

    int sum = 0;
    getSum(n, sum);

}
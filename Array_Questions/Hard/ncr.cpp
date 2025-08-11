#include <iostream>
using namespace std;

int main(){

    cout << endl;

    int n;
    int r;
    cout << "Enter N and R : ";
    cin >> n;
    cin >> r;

    int ncr = 1;
    for ( int i = 1; i <= r; i++ ){
        ncr = ncr * (n - i + 1) / i;
    }

    cout << ncr << endl;
    cout << endl;

}
#include <iostream>
using namespace std;

int getSum(int n){

    if ( n == 0){
        return 1;
    }
    else if ( n == 1) {
        return 1;
    }
    else {
        return n*getSum(n-1);
    }
    return 0;
}

int main(){

    int n;
    cout << "Enter number: ";
    cin >> n;

    int sum = 1;

    cout << getSum(n) << endl;

    main();

}
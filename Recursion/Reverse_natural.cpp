#include <iostream>
using namespace std;

void printNatural(int n){

    if ( n > 0 ){
        cout << n << endl;
        n--;
        printNatural(n);
    }

}

int main(){

    int n;
    cout << "Enter any number: ";
    cin >> n;

    printNatural(n);

}